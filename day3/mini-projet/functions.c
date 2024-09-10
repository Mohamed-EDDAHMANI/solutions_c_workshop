#include<stdio.h>
#include<string.h>
#include "functions.h"



void AjouterContact(char nom[200][50], char Numero[200][50], char email[200][50] , int CC){


    printf("----------- || Veuillez Entrez les donne de contact %d || ------------- ", CC + 1 );
    printf("              Entrer le nom de contact : " );
    scanf(" %[^\n]",nom[CC]);
    printf("              Entrer le Numero de contact : ");
    scanf(" %[^\n]",Numero[CC]);
    printf("              Entrer le email de contact : ");
    scanf(" %[^\n]",email[CC]);

    printf("Le contact a été enregistrer avec succès.\n");
}

void ModifierContact(char nom[200][50], char Numero[200][50], char email[200][50] , int CC){
    char nomRechercher[50];
    char nouvelleNom[50];
    char nouvelleNumero[50];
    char nouvelleemail[50];

    printf("Veuillez Entrez le nom de contact pour modifier :");
    scanf(" %[^\n]", nomRechercher);
    printf("Entrer le nouveau nom :");
    scanf(" %[^\n]", nouvelleNom);
    printf("Entrer le nouveau numero :");
    scanf(" %[^\n]", nouvelleNumero);
    printf("Entrer le nouveau email :");
    scanf(" %[^\n]", nouvelleemail);

    for(int i = 0 ; i < CC ; i++){
        if(strcasecmp(  nom[i] , nomRechercher) == 0){
            strcpy( nom[i] , nouvelleNom );
            strcpy( Numero[i] , nouvelleNumero );
            strcpy( email[i] , nouvelleemail );
            break;
        }
    }


}

void SupprimerContact(char nom[200][50], char Numero[200][50], char email[200][50] , int *CC){
    char nomRechercher[50] ;
    int indexOfContact ;

    printf("Veuillez Entrez le nom de contact :");
    scanf(" %[^\n]", nomRechercher);

    for(int i = 0 ; i <= *CC ; i++){
        if(strcasecmp( nom[i]  ,  nomRechercher ) == 0){
            indexOfContact = i ;
        }
    }
    int taille = *CC -(indexOfContact - 1);

    for(int i = indexOfContact ; i < taille ; i++){
        if (nom[i + 1] != '\0'){
            strcpy(nom[i] , nom[i + 1]);
            strcpy(Numero[i] , Numero[i + 1]);
            strcpy(email[i] , email[i + 1]);
        }
    }
    (*CC)-- ;

    printf("Le contact a été supprimé avec succès.\n");
}

void afficherContact(char nom[200][50], char Numero[200][50], char email[200][50] , int CC){
    if (CC == 0){
        printf("-----------|| les contact est vide ||-----------\n");
    }

    
    
    for(int i = 0 ; i < CC ; i++){
        printf("-----------------|| le contact %d ||--------------\n", i + 1);
        printf("------------ le nom : %s \n", nom[i]);
        printf("------------ le Numero : %s \n", Numero[i]);
        printf("------------ l'email : %s \n", email[i]);
        printf("---------------------------------------------------\n");
        printf("\n");
    }
}

void RechercherContact(char nom[200][50], char Numero[200][50], char email[200][50] , int CC){
    char nomRechercher[50];
    int index ;

    printf("Veuillez Entrez le nom de contact pour modifier :");
    scanf(" %[^\n]", nomRechercher);

    for(int i = 0 ; i < CC ; i++){
        if(strcasecmp(  nom[i] , nomRechercher) == 0){
            index = i ;
            break;
        }
    }
        printf("-----------|| le contact %d ||-----------\n", index + 1);
        printf("------ le nom : %s \n", nom[index]);
        printf("------ le Numero : %s \n", Numero[index]);
        printf("------ l'email : %s \n", email[index]);
        printf("------------------------------------------\n");
        printf("\n");
}
