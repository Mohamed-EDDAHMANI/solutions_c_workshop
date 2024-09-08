#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Entrez un entier n : ");
    scanf("%d", &n);

    printf("Les nombres premiers de 1 a %d sont :\n", n);

    // for (i = 2; i <= n; i++) {
    //     isPrime = 1;
    //     for (j = 2; j * j <= i; j++) {
    //         if (i % j == 0) {
    //             isPrime = 0;
    //             break;
    //         }
    //     }
    //     if (isPrime) {
    //         printf("%d ", i);
    //     }
    // }
    for (i = 2; i <= n; i++) {
        isPrime = 0;
            if (i % 1 == 0 && i % i == 0) {
                isPrime = 1;
            }
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
