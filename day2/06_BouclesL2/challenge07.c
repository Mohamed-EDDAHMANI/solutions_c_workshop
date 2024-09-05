#include <stdio.h>

int main() {
    int n, i;
    unsigned long long first = 0, second = 1, next;

    printf("Entrez le nombre de termes de la suite de Fibonacci: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Veuillez entrer un nombre positif.\n");
    } else {
        printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);
        for (i = 0; i < n; i++) {
            if (i == 0) {
                printf("%llu ", first);
            } else if (i == 1) {
                printf("%llu ", second);
            } else {
                next = first + second;
                printf("%llu ", next);
                first = second;
                second = next;
            }
        }
        printf("\n");
    }

    return 0;
}
