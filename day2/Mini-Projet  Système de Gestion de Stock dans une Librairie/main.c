#include <stdio.h>

#define MAX_BOOKS 100

struct livre{
    char titre[50];
    char auteur[50];
    float prix ;
    int Quantite ;
};

struct livre creerLivre(){
    struct livre nouveauLivre;
    printf("Entre le titre :");
    scanf(" %[^\n]", nouveauLivre.titre);
    printf("Entre le auteur :");
    scanf(" %[^\n]", nouveauLivre.auteur);
    printf("Entre le prix :");
    scanf("%f", &nouveauLivre.prix);
    printf("Entre le Quantite :");
    scanf("%d", &nouveauLivre.Quantite);
    return nouveauLivre;
}

void AfficherLivresDisponibles(struct livre myLivre[],int livreCount){
    if (livreCount == 0) {
        printf("------------------ || Aucun livre disponible. || ------------------\n");
        return;
    }
    for(int i = 0 ; i < livreCount ; i++){
        printf("-------------- || Livre %d || -------------- \n", i + 1);
        printf("--------------Titre: %s\n", myLivre[i].titre);
        printf("--------------Auteur: %s\n", myLivre[i].auteur);
        printf("--------------Prix: %.2f\n", myLivre[i].prix);
        printf("--------------Quantite: %d\n", myLivre[i].Quantite);
        printf("--------------------------------------------\n");
    }
}

void modifierQuantite(struct livre myLivre[],int livreCount){
    int livreChoisir , nouvelleQuantite;
    if (livreCount == 0) {
        printf("------------------ || Aucun livre disponible. || ------------------\n");
        return;
    }
    
    for(int i = 0 ; i < livreCount ; i++){
        printf("-------------- || Livre %d || -------------- \n", i + 1);
        printf("--------------Titre: %s\n", myLivre[i].titre);
        printf("--------------Quantite: %d\n", myLivre[i].Quantite);
        printf("--------------------------------------------\n");
    }
    printf("--- Veuillez choisir le nombre de livre pour modifier le stock ---\n");
    scanf("%d" , &livreChoisir);
    printf("--- Veuillez choisir la nouvelle quantite ---\n");
    scanf("%d" , &nouvelleQuantite);
    myLivre[livreChoisir-1].Quantite = nouvelleQuantite ;
    printf("--------------Titre: %s\n", myLivre[livreChoisir-1].titre);
    printf("--------------Quantite: %d\n", myLivre[livreChoisir-1].Quantite);

}



int main(){
    struct livre myLivre[MAX_BOOKS];
    int option, livreCount = 0 ;
    

    while (1)
    {
        printf("===  continuer la gestion par les Nombres command suivent  ===\n");
        printf("1 - Ajouter un Livre au Stock\n");
        printf("2 - Afficher Tous les Livres Disponibles\n");
        printf("3 - Mettre à Jour la Quantite d'un Livre\n");
        printf("4 - Supprimer un Livre du Stock\n");
        printf("5 - Afficher le Nombre Total de Livres en Stock\n");
        printf("0 - Pour arreter le programme\n");

        printf("--- Entrer le nombre de command : ");
        scanf("%d" , &option);


        switch (option){
        case 0:
            return 0;
        case 1:
            myLivre[livreCount] = creerLivre();
            livreCount++;
            break;
        case 2:
            AfficherLivresDisponibles(myLivre , livreCount);
            break;
        case 3:
            modifierQuantite(myLivre , livreCount);
            break;
        case 4:
                // Code to delete a book from stock would go here
            break;
        case 5:
            printf("Nombre total de livres en stock : %d\n", livreCount);
            break;
        default:
            printf("Choix invalide, veuillez réessayer.\n");
            break;
        }

    }

    return 0;
}