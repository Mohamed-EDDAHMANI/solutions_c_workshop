#include <stdio.h>
#include <string.h>

int main() {
    int scorePerformance;
    int anciennete;
    int recompenses;
    float bonus = 0.0;
    char evaluation[20];

    printf("Entrez le score de performance (de 0 a 100) : ");
    scanf("%d", &scorePerformance);

    printf("Entrez l'anciennete de l'employe (en annees) : ");
    scanf("%d", &anciennete);

    printf("Entrez le nombre de recompenses recues (0, 1, ou 2) : ");
    scanf("%d", &recompenses);

    if (scorePerformance >= 90 && anciennete >= 5) {
        strcpy(evaluation, "Excellente");
    } else if (scorePerformance >= 75 && anciennete >= 3) {
        strcpy(evaluation, "Bonne");
    } else if (scorePerformance >= 50 && anciennete < 3) {
        strcpy(evaluation, "Satisfaisante");
    } else {
        strcpy(evaluation, "Insuffisante");
    }

    switch (recompenses) {
        case 1:
            bonus = 10.0;
            break;
        case 2:
            bonus = 20.0;
            break;
        default:
            bonus = 0.0;
            break;
    }

    printf("Evaluation de la performance : %s\n", evaluation);
    printf("Bonus : %.2f%%\n", bonus);

    return 0;
}
