#include<stdio.h>

int main(){
    int N , FM ;

    printf("Entrer le nombre les elements : \n");
    scanf("%d", &N);

    int t[N], M[N];
    for(int i = 0 ; i < N ; i++){
        printf("-- : ");
        scanf("%d", &t[i]);
    };

    printf("Entrer le facteur de multiplication : \n");
    scanf("%d", &FM);

    for(int i = 0 ; i < N ; i++){
        M[i] = t[i] * FM ;
    };

    for(int i = 0 ; i < N ; i++){
        printf("- %d ", M[i]);
    };


    return 0;
};