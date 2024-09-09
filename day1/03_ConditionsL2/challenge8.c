#include <stdio.h>

int main() {
    int age;
    int historiqueMedical;
    int typeCouverture; 
    char planSante[20];

    printf("Entrez l'age : ");
    scanf("%d", &age);

    printf("Entrez l'historique medical (0 pour aucun probleme, 1 pour probleme mineur, 2 pour probleme majeur) : ");
    scanf("%d", &historiqueMedical);

    printf("Entrez le type de couverture (1 pour de base, 2 pour etendue) : ");
    scanf("%d", &typeCouverture);

    if (age < 30) {
        strcpy(planSante, "Plan de base");
    } else if (age >= 30) {
        if (historiqueMedical == 0) {
            strcpy(planSante, "Plan de base");
        } else {
            strcpy(planSante, "Plan etendu");
        }
    }

    if (historiqueMedical == 2) {
        printf("Couverture supplementaire pour problemes majeurs incluse.\n");
    }

    printf("Plan de sante recommande : %s\n", planSante);

    return 0;
}
