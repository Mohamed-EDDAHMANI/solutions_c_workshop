#include<stdio.h>
#include <string.h>

void reverse(char *chen){
    int length = strlen(chen);
    for (int i = length - 1 ; i >= 0 ; i--)
    {
        printf("%c" , chen[i]);
    }
    
}


int main(){

    char word[100] ;
    printf("Entre un chen de caracter : \n");
    scanf("%s" , word );

    printf("la chaîne inversée : ");
    reverse(word);


    return 0;
}