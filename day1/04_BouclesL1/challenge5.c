#include <stdio.h>

int main() {
    int base, exposant;
    long resultat = 1;

    printf("Entrez la base : ");
    scanf("%d", &base);

    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);

    if (exposant < 0) {
        printf("L'exposant ne peut pas etre negatif.\n");
    } else {
        for (int i = 0; i < exposant; i++) {
            resultat *= base;
        }
        printf("%d^%d =  %ld\n", base, exposant, resultat);
    }

    return 0;
}
