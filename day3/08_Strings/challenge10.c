#include <stdio.h>

int main() {
    char chen[100] ;
    char chenR[50] ;
    int taille = 0 ;
    int count = 0 ;


    printf("Entrer la chaine de caracters : ");
    scanf(" %[^\n]s" , &chen);
    printf("Entrer la chaine de caracters : ");
    scanf(" %[^\n]s" , &chenR);

    for(int j = 0; chenR[j] != '\0'; j++){
            taille++ ;
    }

// chenR[i]   ABC == i
// chen[j]    eruthABgieCutABCtyt == j

    for (int i = 0; chenR[i] != '\0'; i++)
    {
        for(int j = 0; chen[j] != '\0'; j++){
            if (chen[j] == chenR[i]){
                i++ ;
                count++ ;
                if(taille == count){
                    return printf("its true");
                }
            }
        }
        count = 0;
    }
    return printf("its faulse");



    return 0;
}
