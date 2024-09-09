#include <stdio.h>

int main()
{
    int taille = 10;
    int tableau[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int elementRechercher ;
    int isPresent = 0 ;

    printf("Le tableau de recherche : ");

    printf("{");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d -", tableau[i]);
    }
    printf("} \n");

    printf("Entrer l'element recherche : ");
    scanf("%d" , &elementRechercher);

    for (int i = 0 ; i < taille / 2 ; i++)
    {
        if( tableau[i] == elementRechercher){
            isPresent = 1 ;
            break;
        }else{
            
        }
    }
    if(isPresent == 0)
    printf(" l'element est pas dont le tableau ");
    else
    printf(" l'element est trouve ");



    return 0;
}