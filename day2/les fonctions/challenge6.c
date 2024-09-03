#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Entrez un numéro pour trouver le n-ième terme de la suite de Fibonacci: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("Le %d-ième terme de la suite de Fibonacci est: %d\n", n, result);

    return 0;
}
