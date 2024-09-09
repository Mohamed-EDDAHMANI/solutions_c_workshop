#include<stdio.h>


int main(){
    int nombre , somme = 0 ;

    printf("entrer un nombre : ");
    scanf("%d", &nombre);

    for(int i = 1 ; i <= nombre ; i++){
        if(i % 2 == 0){
            printf("-- %d " , i);
        }
    }




    return 0 ;
}


