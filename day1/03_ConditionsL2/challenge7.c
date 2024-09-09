#include <stdio.h>

int main() {
    float revenuAnnuel;
    int statutFiscal;
    float deductions;
    float revenuImposable;
    float impots;
    float montantFinal;

    printf("Entrez le revenu annuel (en euros) : ");
    scanf("%f", &revenuAnnuel);

    printf("Entrez le statut fiscal (1 pour celibataire, 2 pour marie, 3 pour chef de famille) : ");
    scanf("%d", &statutFiscal);

    printf("Entrez les deductions (en euros) : ");
    scanf("%f", &deductions);

    switch (statutFiscal) {
        case 1:
            deductions += 1000;
            break;
        case 2:
            deductions += 2000;
            break;
        case 3:
            deductions += 3000;
            break;
        default:
            printf("Statut fiscal invalide.\n");
            return 1;
    }

    revenuImposable = revenuAnnuel - deductions;

    if (revenuImposable <= 20000) {
        impots = revenuImposable * 0.05;
    } else if (revenuImposable <= 50000) {
        impots = revenuImposable * 0.10;
    } else {
        impots = revenuImposable * 0.20;
    }

    printf("Montant des impots a payer : %.2f euros\n", impots);

    return 0;
}
