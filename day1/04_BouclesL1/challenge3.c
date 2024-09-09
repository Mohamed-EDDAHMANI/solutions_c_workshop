#include<stdio.h>


int main(){
    int nombre , somme = 0 ;

    printf("entrer un nombre : ");
    scanf("%d", &nombre);

    for(int i = 1 ; i <= nombre ; i++){
        somme += i ;
    }

    printf("- la somme est : %d\n" , somme );



    return 0 ;
}


