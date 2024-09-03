#include<stdio.h>

int main(){
    int N , somme = 0 ;

    printf("Entrer le nombre les elements : \n");
    scanf("%d", &N);

    int t[N];

    for(int i = 0 ; i < N ; i++){
        printf("-- : ");
        scanf("%d", &t[i]);
        somme += t[i] ;
    };

    printf("-le somme totale est : %d \n", somme);

    return 0;
};