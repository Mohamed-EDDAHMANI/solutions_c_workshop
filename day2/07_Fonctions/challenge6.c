#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Entrez un numero pour trouver le Fibonacci: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("Le %d-ieme terme de la suite de Fibonacci est: %d\n", n, result);

    return 0;
}
