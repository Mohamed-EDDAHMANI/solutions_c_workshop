#include<stdio.h>

int fact(int N1 ){
    int s = 1 ;
    for (int i = 2 ; i <= N1 ; i++){
        s = s * i ;
    }
    return s ;
}


int main(){

    int a , result ;
    printf("Entre le nombre : \n");
    scanf("%d" , &a );
    if (a > 0){
        result = fact(a);
        printf("la factorielle de nombre est : %d", result);
    }else{
        printf("le nombre doit etre positif");
    }
    

    return 0;
}