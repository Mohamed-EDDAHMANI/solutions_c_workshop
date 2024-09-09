#include <stdio.h>

int main() {
    int joursAccordes;
    int joursUtilises;
    int statutEmploye;
    int joursRestants;

    printf("Entrez le nombre total de jours de congés accordés : ");
    scanf("%d", &joursAccordes);

    printf("Entrez le nombre de jours de congés utilisés : ");
    scanf("%d", &joursUtilises);

    printf("Entrez le statut de l'employé (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &statutEmploye);

    if (statutEmploye == 1) {
        joursRestants = joursAccordes - joursUtilises;
    } else if (statutEmploye == 0) {
        joursRestants = (joursAccordes / 2) - joursUtilises;
    } else {
        printf("Statut de l'employé invalide.\n");
        return 1;
    }

    if (joursUtilises > joursAccordes) {
        printf("Alerte : Le nombre de jours de congés utilisés dépasse le nombre de jours accordés.\n");
    } else {
        printf("Nombre de jours de congés restants : %d\n", joursRestants);
    }

    return 0;
}
