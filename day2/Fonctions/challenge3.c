#include<stdio.h>

int produit(int N1 , int N2){
    if( N1 > N2){
        return N1;
    }else if(N2 > N1){
        return N2; 
    }
}


int main(){

    int a , b , result ;
    printf("Entre les deux nombres : \n");
    scanf("%d" , &a );
    scanf("%d" , &b );
    result = produit(a,b);

    printf("le plus grand des deux nombres est : %d", result);

    return 0;
}