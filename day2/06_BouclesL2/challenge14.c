#include <stdio.h>

int main() {
    const char* joursSemaine[] = {
        "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"
    };
    int choix;

    printf("Sélectionnez un jour de la semaine (1 pour Lundi, 2 pour Mardi, etc.) : ");
    scanf("%d", &choix);

    if (choix < 1 || choix > 7) {
        printf("Choix invalide. Veuillez entrer un nombre entre 1 et 7.\n");
        return 1;
    }

    printf("Jour sélectionné : %s\n", joursSemaine[choix - 1]);

    printf("Jours suivants :\n");
    for (int i = choix; i < 7; i++) {
        printf("%s\n", joursSemaine[i]);
    }

    return 0;
}
