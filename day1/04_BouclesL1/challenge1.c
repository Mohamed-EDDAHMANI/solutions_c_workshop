#include<stdio.h>


int main(){

    int nombre ;

    printf("entrer un nombre");
    scanf("%d", &nombre);

    for(int i = 1 ; i < 10 ; i++){
        printf("- %d X %d = %d \n" , nombre, i , nombre * i );

    }



    return 0 ;
}


