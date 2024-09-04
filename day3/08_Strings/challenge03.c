#include <stdio.h>

int main() {
    char chen1[100], chen2[100], res[100] ;
    int i, j;

    printf("Entrer le premier caracters : ");
    scanf("%s" , chen1);
    printf("Entrer le deuxieme caracters : ");
    scanf("%s" , chen2);

    for( i = 0 ; chen1[i] != '\0' ; i++ ){
        res[i] = chen1[i] ;
    }
    for( j = 0 ; chen1[j] != '\0' ; j++ ){
        res[i + j] = chen2[j] ;
    }
        printf("%s", res);

    



    return 0;
}
