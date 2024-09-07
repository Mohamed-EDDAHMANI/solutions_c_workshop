#include <stdio.h>
#include <string.h>

int main() {
    char chen[100] ;
    char chenR[50] ;
    char stocke[50] ;
    int taille = 0 ;
    int count = 0 ;


    printf("Entrer la chaine de caracters : ");
    scanf(" %[^\n]s" , chen);
    printf("Entrer la chaine de caracters : ");
    scanf(" %[^\n]s" , chenR);

    for(int j = 0; chenR[j] != '\0'; j++){
            taille++ ;
    }

// chenR[i]   ABC == i
// chen[j]    eruthABgieCutABCtyt == j

    for (int i = 0; chen[i] != '\0'; i++)
    {
        if (chen[i] != ' '){
            stocke[i] = chen[i] ;
            printf("%s \n" , stocke);
        }else{
            if(strcasecmp(stocke , chenR) == 0){
                return printf("its true");
            }
        }
    }
    printf(" %s ", stocke );
    return printf("its faulse");



    return 0;
}
