#include <stdio.h>

int main() {
    int nombre;
    int somme = 0;
    int compteur = 0;

    printf("Entrez une serie de nombres positifs (terminez par 0) :\n");

    while (1) {
        scanf("%d", &nombre);

        if (nombre == 0) {
            break;
        }

        if (nombre > 0) {
            somme += nombre;
            compteur++;
        } else {
            printf("Veuillez entrer uniquement des nombres positifs.\n");
        }
    }

    if (compteur > 0) {
        double moyenne = (double)somme / compteur;
        printf("La moyenne des nombres est : %.2f\n", moyenne);
    } else {
        printf("Aucun nombre positif n'a ete entre.\n");
    }

    return 0;
}
