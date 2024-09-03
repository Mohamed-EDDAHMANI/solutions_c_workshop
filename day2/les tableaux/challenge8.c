#include<stdio.h>

int main(){
    int N ;

    printf("Entrer le nombre les elements : \n");
    scanf("%d", &N);

    int t[N], M[N];
    for(int i = 0 ; i < N ; i++){
        printf("-- : ");
        scanf("%d", &t[i]);
    };

    for(int i = 0 ; i < N ; i++){
        M[i] = t[i] ;
    };

    for(int i = 0 ; i < N ; i++){
        printf("- T1[%d] = %d \n",i , t[i]);
    };
    for(int i = 0 ; i < N ; i++){
        printf("- T2[%d] = %d \n",i , M[i]);
    };


    return 0;
};