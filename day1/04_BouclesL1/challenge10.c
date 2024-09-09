#include <stdio.h>

int main() {
    int n;
    int somme = 0;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Veuillez entrer un entier positif superieur ou egal a 1.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            somme += i;
        }
        printf("La somme des %d premiers entiers naturels est %d\n", n, somme);
    }

    return 0;
}
