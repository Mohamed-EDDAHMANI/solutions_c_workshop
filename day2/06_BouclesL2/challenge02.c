#include<stdio.h>

int main(){
    int N ;

    printf("Entrer un nombre : ");
    scanf("%d", &N);

    for (int i = 1; i <= N ; i++){
        if(i % 2 != 0){
            for (int y = 1; y <= i; y++){
                printf("*");
            }
        printf("\n" );
        }
    }
   return 0;  
}