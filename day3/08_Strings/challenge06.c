#include<stdio.h>

int main(){
    char chen[50];
    char cara ;
    int count = 0;

    printf("Veuillez Entrez une chaine de caractere : \n");
    scanf("%s" ,&chen);
    printf("Veuillez Entrez un caractere : \n");
    scanf(" %c" , &cara);

    for(int i = 0 ; chen[i]  != '\0' ; i++){
        if (chen[i] == cara){
            count++ ;
        }
    };

    printf("le caracter apparait %d fois", count);

    return 0;
};