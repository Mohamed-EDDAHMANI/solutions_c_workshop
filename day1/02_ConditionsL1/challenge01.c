#include<stdio.h>

int main(){
    int N;
    printf("Entrer un nombre : ");
    scanf("%d",&N);
    if(N % 2 == 0){
        printf("ce nombre est pair : ");
    }else
        printf("ce nombre est impair : ");

}