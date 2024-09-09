#include <stdio.h>

int main() {
    int ageConducteur;
    int typeVoiture;
    int nombreAccidents;
    float primeBase = 100.0;
    float primeFinale;

    printf("Entrez l'age du conducteur (en annees) : ");
    scanf("%d", &ageConducteur);

    printf("Entrez le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &typeVoiture);

    printf("Entrez le nombre d'accidents au cours des 5 dernieres annees : ");
    scanf("%d", &nombreAccidents);

    if (ageConducteur < 25) {
        primeFinale = primeBase * 1.5;
    } else if (ageConducteur >= 25 && ageConducteur <= 65) {
        primeFinale = primeBase;
    } else {
        primeFinale = primeBase * 1.2;
    }

    switch (typeVoiture) {
        case 1: 
            primeFinale *= 2;
            break;
        case 2: 
            primeFinale *= 1.2;
            break;
        case 3:
            primeFinale *= 1.1;
            break;
        default:
            printf("Type de voiture invalide.\n");
            return 1; 
    }

    if (nombreAccidents > 1) {
        primeFinale *= 1.3; 
    }
    printf("La prime d'assurance finale est : %.2f euros\n", primeFinale);

    return 0;
}
