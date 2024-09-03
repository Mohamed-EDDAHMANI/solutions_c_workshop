#include<stdio.h>

int fact(int N1 ){
    int f = 1 , s ;
    for (int i = 2 ; i <= N1 ; i++){
        s = f * i ;
    }
    
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