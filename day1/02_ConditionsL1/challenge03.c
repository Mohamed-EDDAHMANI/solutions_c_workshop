#include<stdio.h>

int main(){
    int N1, N2, s;
    printf("Entrer le nombre 1 : ");
    scanf("%d",&N1);
    printf("Entrer le nombre 2 : ");
    scanf("%d",&N2);
    s = N1 + N2 ;
    s = (N1 != N2) ? s  : s * 3 ;
    printf("Le résultat est : %d\n", s);

}