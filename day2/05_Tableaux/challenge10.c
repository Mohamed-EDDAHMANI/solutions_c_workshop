#include<stdio.h>

int main(){
    int N , r , c = 0;

    printf("Entrer le nombre les elements : \n");
    scanf("%d", &N);

    int t[N] ;
    for(int i = 0 ; i < N ; i++){
        printf("-- : ");
        scanf("%d", &t[i]);
    };

    printf("Entrer l'element a rechercher : \n");
    scanf("%d", &r);

    for(int i = 0 ; i < N ; i++){
        if ( t[i] == r ){
            c = 1 ; 
        }
    };
    if ( c == 1 ){
        printf("l'element %d est present \n", r);
    }else{
        printf("l'element %d est absent \n" , r);
    }


    return 0;
};