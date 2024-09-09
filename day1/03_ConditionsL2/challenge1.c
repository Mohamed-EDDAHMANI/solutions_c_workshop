#include <stdio.h>

int main() {
    float revenu;
    int scoreCredit;
    int dureePret;

    printf("Entrez le revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez le score de credit (sur 1000) : ");
    scanf("%d", &scoreCredit);

    printf("Entrez la duree du pret (en annees) : ");
    scanf("%d", &dureePret);

    if (revenu >= 30000 && scoreCredit >= 700 && dureePret <= 10) {
        printf("Eligible\n");
    } else if (revenu >= 30000 && scoreCredit >= 650 && dureePret <= 15) {
        printf("Eligible avec conditions\n");
    } else {
        printf("Non eligible\n");
    }

    return 0;
}
