#include <stdio.h>

int main() {
    int n , revers = 0 ;

    printf("Entrez un entier n : ");
    scanf("%d", &n);

    while (n != 0)
    {
        revers = revers * 10 + n % 10 ;
        n /= 10 ;
    }
    
    printf("L'ordre inverse est : %d\n", revers);


    return 0;
}
