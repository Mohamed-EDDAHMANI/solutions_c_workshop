#include <stdio.h>

int main() {
    int age;
    int anneesCotisation;
    float montantEpargne;
    float bonus;
    float montantFinal;

    printf("Entrez l'age : ");
    scanf("%d", &age);

    printf("Entrez le nombre d'annees de cotisation : ");
    scanf("%d", &anneesCotisation);

    printf("Entrez le montant total epargne (en euros) : ");
    scanf("%f", &montantEpargne);

    if (age >= 65) {
        if (anneesCotisation >= 30 && montantEpargne >= 100000) {
            printf("Plan complet avec pension elevee\n");
        } else if (anneesCotisation >= 20 && montantEpargne >= 50000) {
            printf("Plan partiel avec pension moyenne\n");
        } else {
            printf("Plan non eligible\n");
        }
    } else {
        printf("Plan epargne non encore disponible\n");
    }

    if (montantEpargne > 50000) {
        bonus = ((montantEpargne - 50000) / 10000) * 0.05;
        montantFinal = montantEpargne * (1 + bonus);
    } else {
        montantFinal = montantEpargne;
    }

    printf("Montant final avec bonus : %.2f euros\n", montantFinal);

    return 0;
}
