#include<stdio.h>

int somme(int N1 , int N2){
    return N1 + N2 ;
}


int main(){

    int a , b , result ;
    printf("Entre les deux nombres : \n");
    scanf("- %d" , &a );
    scanf("- %d" , &b );
    result = somme(a,b);

    printf("la somme est : %d", result);

    return 0;
}