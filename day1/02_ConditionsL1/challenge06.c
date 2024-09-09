#include<stdio.h>


int main(){

    int nombre ;

    printf("Entrer le nombre : ");
    scanf("%d" , &nombre);

    if (nombre > 0) {
        printf("Le nombre est positif\n");
    } else if (nombre < 0) {
        printf("Le nombre est négatif\n");
    } else {
        printf("Le nombre est égal à zéro\n");
    }



    return 0 ;
}