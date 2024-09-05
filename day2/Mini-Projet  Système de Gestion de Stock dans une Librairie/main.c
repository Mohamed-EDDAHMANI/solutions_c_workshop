#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100


void creerLivre(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int livreCount){

    printf("Entre le titre :");
    scanf(" %[^\n]", titres[livreCount]);
    printf("Entre le auteur :");
    scanf(" %[^\n]", auteurs[livreCount]);
    printf("Entre le prix :");
    scanf("%f", &prix[livreCount]);
    printf("Entre le Quantite :");
    scanf("%d", &quantite[livreCount]);

}

void AfficherLivresDisponibles(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int livreCount){
    if (livreCount == 0) {
        printf("------------------ || Aucun livre disponible. || ------------------\n");
        return;
    }
    for(int i = 0 ; i < livreCount ; i++){
        printf("-------------- || Livre %d || -------------- \n", i + 1);
        printf("--------------Titre: %s\n", titres[i]);
        printf("--------------Auteur: %s\n", auteurs[i]);
        printf("--------------Prix: %.2f\n", prix[i]);
        printf("--------------Quantite: %d\n", quantite[i]);
        printf("--------------------------------------------\n");
    }
}

void modifierQuantite(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int livreCount){
    int  nouvelleQuantite, indexOfLivre = -1;
    char titreRecherche[50] ;
    if (livreCount == 0) {
        printf("------------------ || Aucun livre disponible. || ------------------\n");
        return;
    }

    printf("le titre du livre rechercher : ");
    scanf(" %[^\n]", titreRecherche);
    printf("Veuillez Entrez la nouvelle quantite : ");
    scanf("%d", &nouvelleQuantite);
    
    for(int i = 0 ; i < livreCount ; i++){
        if (strcasecmp(titres[i], titreRecherche) == 0){
            indexOfLivre = i;
            break;
        }
    }
    if(indexOfLivre == -1){
        printf("--- Vous n'avez pas cette livre ou vous tapez le mauvais nom ---\n");
    }else{
        quantite[indexOfLivre] = nouvelleQuantite ;
    }

}

void SupprimerLivre(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int *livreCount){
    int indexOfLivre = -1;
    char titreRecherche[50] ;
    if (livreCount == 0) {
        printf("------------------ || Aucun livre disponible. || ------------------\n");
        return;
    }

    printf("le titre du livre rechercher : ");
    scanf(" %[^\n]", titreRecherche);

    for(int i = 0 ; i < *livreCount ; i++){
        if (strcasecmp(titres[i], titreRecherche) == 0){
            indexOfLivre = i;
            break;
        }
    }

    for(int i = indexOfLivre ; i < *livreCount - 1 ; i++){
        if(titres[i] != '\0'){
            strcpy(titres[i] , titres[i + 1]);
            printf("%s : " ,titres[i + 1]);
            strcpy(auteurs[i] , auteurs[i + 1]);
            prix[i] = prix[i + 1];
            quantite[i] = quantite[i + 1];
        }
    }
    (*livreCount)-- ;
    printf("Le livre a été supprimé avec succès.\n");
}

int main(){
    char titres[MAX_BOOKS][50];
    char auteurs[MAX_BOOKS][50];
    float prix[MAX_BOOKS]; 
    int quantite[MAX_BOOKS]; 
    int option, livreCount = 0 ;
    

    while (1)
    {
        printf("===  continuer la gestion par les Nombres command suivent  ===\n");
        printf("1 - Ajouter un Livre au Stock\n");
        printf("2 - Afficher Tous les Livres Disponibles\n");
        printf("3 - Mettre a Jour la Quantite d'un Livre\n");
        printf("4 - Supprimer un Livre du Stock\n");
        printf("5 - Afficher le Nombre Total de Livres en Stock\n");
        printf("0 - Pour arreter le programme\n");

        printf("--- Entrer le nombre de command : ");
        scanf("%d" , &option);


        switch (option){
        case 0:
            return 0;
        case 1:
            creerLivre(titres, auteurs, prix, quantite, livreCount);
            livreCount++;
            printf("0 - Pour arreter le programme\n");
            printf("1 - Pour contuner\n");
            scanf("%d" , &option);
            if (option == 0){
               return 0;
            }else if (option == 1){
               break;
            }
            break;
        case 2:
            AfficherLivresDisponibles(titres, auteurs, prix, quantite, livreCount);
            printf("0 - Pour arreter le programme\n");
            printf("1 - Pour contuner\n");
            scanf("%d" , &option);
            if (option == 0){
               return 0;
            }else if (option == 1){
               break;
            }
            break;
        case 3:
            modifierQuantite(titres, auteurs, prix, quantite, livreCount);
            AfficherLivresDisponibles(titres, auteurs, prix, quantite, livreCount);
            printf("0 - Pour arreter le programme\n");
            printf("1 - Pour contuner\n");
            scanf("%d" , &option);
            if (option == 0){
               return 0;
            }else if (option == 1){
               break;
            }
            break;
        case 4:
                SupprimerLivre(titres, auteurs, prix, quantite, &livreCount);
            printf("0 - Pour arreter le programme\n");
            printf("1 - Pour contuner\n");
            scanf("%d" , &option);
            if (option == 0){
               return 0;
            }else if (option == 1){
               break;
            }
            break;
        case 5:
            printf("Nombre total de livres en stock : %d\n", livreCount);
            printf("0 - Pour arreter le programme\n");
            printf("1 - Pour contuner\n");
            scanf("%d" , &option);
            if (option == 0){
               return 0;
            }else if (option == 1){
               break;
            }
            break;
        default:
            printf("Choix invalide, veuillez réessayer.\n");
            printf("0 - Pour arreter le programme\n");
            printf("1 - Pour contuner\n");
            scanf("%d" , &option);
            if (option == 0){
               return 0;
            }else if (option == 1){
               break;
            }
            break;
        }

    }

    return 0;
}