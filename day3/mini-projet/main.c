#include<stdio.h>
#include<string.h>


void AjouterContact(char nom[200][50], char Numero[200][50], char email[200][50] , int CC){


    printf("Entrer le nom de contact : " );
    scanf(" %[^\n]",nom[CC]);
    printf("Entrer le Numero de contact : ");
    scanf(" %[^\n]",Numero[CC]);
    printf("Entrer le email de contact : ");
    scanf(" %[^\n]",email[CC]);

}

void ModifierContact(char nom[200][50], char Numero[200][50], char email[200][50] , int CC){
    char nomRechercher[50];
    char nouvelleNom[50];
    char nouvelleNumero[50];
    char nouvelleemail[50];
    printf("Entrer le nom de contact pour modifier :");
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

    printf("entrer le nom de contact :");
    scanf(" %[^\n]", nomRechercher);

    for(int i = 0 ; i <= *CC ; i++){
        if(strcasecmp( nom[i]  ,  nomRechercher ) == 0){
            indexOfContact = i ;
        }
    }
    int taille = *CC -(indexOfContact - 1);

    for(int i = indexOfContact ; i < taille ; i++){
        if (nom[i] != '\0'){
            strcpy(nom[i] , nom[i + 1]);
            strcpy(Numero[i] , Numero[i + 1]);
            strcpy(email[i] , email[i + 1]);
        }
    }
    (*CC)-- ;

    printf("Le contact a été supprimé avec succès.\n");
}

void afficherContact(char nom[200][50], char Numero[200][50], char email[200][50] , int CC){
    
    for(int i = 0 ; i < CC ; i++){
        printf("-----------|| le contact %d ||-----------\n", i + 1);
        printf("------ le nom : %s \n", nom[i]);
        printf("------ le Numero : %s \n", Numero[i]);
        printf("------ l'email : %s \n", email[i]);
        printf("------------------------------------------\n");
        printf("\n");
    }
}

void RechercherContact(char nom[200][50], char Numero[200][50], char email[200][50] , int CC){
    char nomRechercher[50];
    int index ;

    printf("Entrer le nom de contact pour modifier :");
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
            printf("0 - Pour arreter le programme\n");
            printf("1 - Pour contuner\n");
            scanf("%d" , &option);
            if (option == 0){
               return 0;
            }else if (option == 1){
               break;
            }
            return 0;
            break;
        case 3:
            SupprimerContact(nom ,Numero, email, &CC);
            printf("0 - Pour arreter le programme\n");
            printf("1 - Pour contuner\n");
            scanf("%d" , &option);
            if (option == 0){
               return 0;
            }else if (option == 1){
               break;
            }
            return 0;
            break;
        case 4:
            afficherContact(nom ,Numero, email, CC);
            printf("0 - Pour arreter le programme\n");
            printf("1 - Pour contuner\n");
            scanf("%d" , &option);
            if (option == 0){
               return 0;
            }else if (option == 1){
               break;
            }
            return 0;
            break;
        case 5:
            RechercherContact(nom ,Numero, email, CC);
            return 0;
            break;
        
        default:
            break;
        }
    }
    




    return 0;
}