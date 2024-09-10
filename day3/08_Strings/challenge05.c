#include<stdio.h>

int main(){
    char chen[5];
    int count = -1;

    printf("Veuillez Entrez une chaine de caractere : \n");
    scanf("%s" ,chen);

    for(int i = 0 ; chen[i]  != '\0' ; i++){
        count++ ;
    };

    for(int i = count  ; i >= 0 ; i--){
        printf("%c", chen[i]);
    };

    return 0;
};