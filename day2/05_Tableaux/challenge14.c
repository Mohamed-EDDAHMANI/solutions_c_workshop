#include<stdio.h>

int main(){
    int N , somme = 0 ;

    printf("Entrer le nombre les elements : \n");
    scanf("%d", &N);

    int t[N] ;
    for(int i = 0 ; i < N ; i++){
        printf("-- : ");
        scanf("%d", &t[i]);
    };

    for(int i = 0 ; i < N ; i++){
        somme += t[i] ;
    };

    printf("la moyenne des elements de tableau est : %d \n", somme / N);


    return 0;
};