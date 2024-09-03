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

    for(int y = N-1 ; y >= 0 ; y--){
        printf("- %d \n", t[y]);
    }


    return 0;
};