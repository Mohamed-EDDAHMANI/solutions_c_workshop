#include<stdio.h>

int main(){
    int N , VR , NV ;

    printf("Entrer le nombre les elements : \n");
    scanf("%d", &N);

    int t[N] ;
    for(int i = 0 ; i < N ; i++){
        printf("-- : ");
        scanf("%d", &t[i]);
    };

    printf("Entrer la valeur à remplacer : \n");
    scanf("%d", &VR);
    printf("Entrer la nouvelle valeur : \n");
    scanf("%d", &NV);

    for(int i = 0 ; i < N ; i++){
        if ( t[i] == VR ){
            t[i] = NV ; 
        }
    };

    printf("le tableaux apre la modification : \n");
    for(int i = 0 ; i < N ; i++){
        printf("- %d \n", t[i]);
    };


    return 0;
};