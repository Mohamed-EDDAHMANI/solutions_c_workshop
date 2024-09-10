#include<stdio.h>
#include<string.h>
#include"functions.h"



int main(){
    char nom[200][50] ;
    char Numero[200][50] ;
    char email[200][50] ;
    int CC = 0 , option ;
    
    while (1)
    {
        printf("\n");
        printf("                 ===== continuer la gestion par les Nombres command suivent ===== \n");
        printf("\n");
        printf("     1 - Ajouter un Contact \n");
        printf("     2 - Modifier un Contact \n");
        printf("     3 - Supprimer un Contact\n");
        printf("     4 - Afficher Tous les Contacts\n");
        printf("     5 - Rechercher un Contact\n");
        printf("     0 - Pour arreter le programme\n");

        printf("--- Entrer le nombre de command : ");
        scanf("%d" , &option);

        switch (option)
        {
        case 0:
            return 0;
            break;
        case 1:
            AjouterContact(nom ,Numero, email, CC);
            CC++ ;
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
            ModifierContact(nom ,Numero, email, CC);
            break;
        case 3:
            SupprimerContact(nom ,Numero, email, &CC);
            break;
        case 4:
            afficherContact(nom ,Numero, email, CC);
            break;
        case 5:
            RechercherContact(nom ,Numero, email, CC);
            break;
        
        default:
            break;
        }
         printf("( 0 ) - Pour arreter le programme\n");
         printf("( 1 ) - Pour contuner\n");
         scanf("%d" , &option);
         if (option == 0){
            return 0;
         }else if (option == 1){
            break;
         }
    }
    
    return 0;
}