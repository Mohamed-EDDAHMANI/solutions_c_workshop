#include<stdio.h>

int main(){
    int N ;

    printf("Entrer le nombre les elements : \n");
    scanf("%d", &N);

    int t[N] ;
    for(int i = 0 ; i < N ; i++){
        printf("-- : ");
        scanf("%d", &t[i]);
    };

    printf("les éléments pairs :");
    for(int i = 0 ; i < N ; i++){
        if ( t[i] % 2 ==  0 ){
            printf("- %d \n", t[i]);
        }
    };

    return 0;
};