#include <stdio.h>

int main() {
    int n;
    long a = 0, b = 1, c;

    printf("Entrez le nombre de termes de la suite de Fibonacci a afficher : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Le nombre de termes doit etre superieur a zero.\n");
    } else if (n == 1) {
        printf("0\n");
    } else {
        printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);
        printf("0\n");
        printf("1\n");

        for (int i = 2; i < n; i++) {
            c = a + b;
            printf("%ld\n", c);
            a = b;
            b = c;
        }
    }

    return 0;
}
