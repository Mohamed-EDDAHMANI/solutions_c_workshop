#include <stdio.h>

int main() {
    float consommation;
    int typeUtilisateur;
    int typeContrat;
    float tarifParKWh;
    float montantFacture;
    float montantFinal;

    printf("Entrez la consommation d'electricite (en kWh) : ");
    scanf("%f", &consommation);

    printf("Entrez le type d'utilisateur (1 pour residentiel, 2 pour commercial) : ");
    scanf("%d", &typeUtilisateur);

    printf("Entrez le type de contrat (0 pour standard, 1 pour reduit) : ");
    scanf("%d", &typeContrat);

    if (typeUtilisateur == 1) {
        if (typeContrat == 0) {
            tarifParKWh = 0.20;
        } else {
            tarifParKWh = 0.15;
        }
    } else if (typeUtilisateur == 2) {
        if (typeContrat == 0) {
            tarifParKWh = 0.30;
        } else {
            tarifParKWh = 0.25;
        }
    } else {
        printf("Type d'utilisateur invalide.\n");
        return 1;
    }

    montantFacture = consommation * tarifParKWh;

    if (consommation > 500) {
        montantFinal = montantFacture * 1.10;
    } else {
        montantFinal = montantFacture;
    }

    printf("Montant de la facture d'electricite : %.2f euros\n", montantFinal);

    return 0;
}
