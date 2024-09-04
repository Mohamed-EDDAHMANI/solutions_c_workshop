#include <stdio.h>

int main() {
    int n , s = 1 ;

    printf("Entrez un entier n : ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++){
        s = s + i ;
    }
    
    
    printf("La somme est : %d\n", s);


    return 0;
}
