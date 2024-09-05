#include <stdio.h>

int main() {
    int base, exposant;
    int resultat = 1; 
    int i = 0;

    printf("Entrez une base positive: ");
    scanf("%d", &base);

    printf("Entrez un exposant non négatif: ");
    scanf("%d", &exposant);

    if (base < 0 || exposant < 0) {
        printf("La base doit être positive et l'exposant non négatif.\n");
        return 1;
    }

    while (i < exposant) {
        resultat *= base;
        i++;
    }

    printf("%d puissance %d est: %d\n", base, exposant, resultat);

    return 0;
}
