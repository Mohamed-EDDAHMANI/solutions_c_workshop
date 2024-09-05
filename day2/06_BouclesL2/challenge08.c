#include <stdio.h>

int main() {
    int tableau[] = {2, 3, 4, 10, 40, 50, 60, 70, 80};
    int taille = 9;
    int valeur, result;
    int inf = 0 ;
    int sup = taille - 1;
    
    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &valeur);

    while (inf <= sup)
    {
        int mil = (inf + sup) / 2;
        if (tableau[mil] == valeur){
            printf("est existe") ;
            break;
        }else if ( tableau[mil] < valeur )
        {
            inf = mil + 1 ;
        }else{
            sup = mil - 1 ;
        }
        
    }
    


    


    return 0;
}
