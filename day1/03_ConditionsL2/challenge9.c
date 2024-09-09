#include <stdio.h>

int main() {
    float salaireDeBase;
    int heuresSupplementaires;
    int typeDePoste;
    float tauxHoraire;
    float montantHeuresSupplementaires;
    float prime;
    float salaireTotal;

    printf("Entrez le salaire de base (en euros) : ");
    scanf("%f", &salaireDeBase);

    printf("Entrez le nombre d'heures supplementaires : ");
    scanf("%d", &heuresSupplementaires);

    printf("Entrez le type de poste (1 pour junior, 2 pour senior) : ");
    scanf("%d", &typeDePoste);

    tauxHoraire = salaireDeBase / 160;

    montantHeuresSupplementaires = heuresSupplementaires * (1.5 * tauxHoraire);

    if (typeDePoste == 1) {
        prime = 0.10 * salaireDeBase;
    } else if (typeDePoste == 2) {
        prime = 0.20 * salaireDeBase;
    } else {
        printf("Type de poste invalide.\n");
        return 1;
    }

    salaireTotal = salaireDeBase + montantHeuresSupplementaires + prime;

    printf("Salaire total : %.2f euros\n", salaireTotal);

    return 0;
}
