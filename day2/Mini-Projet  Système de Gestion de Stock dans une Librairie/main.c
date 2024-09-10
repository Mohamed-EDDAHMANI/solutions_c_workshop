#include <stdio.h>
#include "functions.h"

#define MAX_BOOKS 100


int main(){
    char titres[MAX_BOOKS][50];
    char auteurs[MAX_BOOKS][50];
    float prix[MAX_BOOKS]; 
    int quantite[MAX_BOOKS]; 
    int option, livreCount = 0 ;
    

    while (1)
    {
        printf("\n");
        printf("                 ===  continuer la gestion par les Nombres command suivent  ===\n");
        printf("\n");
        printf("    1 - Ajouter un Livre au Stock\n");
        printf("    2 - Afficher Tous les Livres Disponibles\n");
        printf("    3 - Mettre a Jour la Quantite d'un Livre\n");
        printf("    4 - Supprimer un Livre du Stock\n");
        printf("    5 - Afficher le Nombre Total de Livres en Stock\n");
        printf("    0 - Pour arreter le programme\n");
        printf("\n");

        printf("    Entrer le nombre de command : ");
        scanf("%d" , &option);

        switch (option){
        case 0:
            return 0;
        case 1:
            creerLivre(titres, auteurs, prix, quantite, livreCount);
            livreCount++;
            break;
        case 2:
            AfficherLivresDisponibles(titres, auteurs, prix, quantite, livreCount);
            break;
        case 3:
            modifierQuantite(titres, auteurs, prix, quantite, livreCount);
            AfficherLivresDisponibles(titres, auteurs, prix, quantite, livreCount);
            break;
        case 4:
            SupprimerLivre(titres, auteurs, prix, quantite, &livreCount);
            break;
        case 5:
            option = NombreStock(quantite,livreCount) ;
            break;
        default:
            break;
        }
        printf("0 - Pour arreter le programme\n");
            printf("1 - Pour contuner\n");
            scanf("%d" , &option);
            if (option == 0){
               return 0;
            }else if (option == 1){
               break;
            }

    }

    return 0;
}