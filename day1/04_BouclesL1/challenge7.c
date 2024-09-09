#include <stdio.h>

int main() {
    int nombre;
    int chiffre;

    printf("Entrez un entier à plusieurs chiffres : ");
    scanf("%d", &nombre);

    int nombreOriginal = nombre;
    if (nombre < 0) {
        printf("-");
        nombre = -nombre;
    }

    while (nombre > 0) {
        chiffre = nombre % 10;
        printf("%d", chiffre);
        nombre /= 10;
    }

    if (nombreOriginal == 0) {
        printf("0");
    }

    printf("\n");

    return 0;
}
