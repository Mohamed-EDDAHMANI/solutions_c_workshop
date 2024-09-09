#include <stdio.h>

int main() {
    int n;
    long factorial = 1;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle n'est pas definie pour les nombres negatifs.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("%d! = %llu\n", n, factorial);
    }

    return 0;
}
