#include<stdio.h>

int main(){
    int t[5];

    printf("Entrer les 5 nombre : \n");

    for(int i = 0 ; i <= 4 ; i++){
        printf("-- : ");
        scanf("%d", &t[i]);
    };
    for(int i = 0 ; i <= 4 ; i++){
        printf("- %d \n", t[i]);
    };

    return 0;
};