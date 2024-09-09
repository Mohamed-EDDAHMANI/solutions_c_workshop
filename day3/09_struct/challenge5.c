#include <stdio.h>
#include <string.h>

struct Livre {
    char titre[100];
    char auteur[100];
    int annee;
};

struct Livre creerLivre(const char *titre, const char *auteur, int annee) {
    struct Livre livre;

    strncpy(livre.titre, titre, sizeof(livre.titre) - 1);
    livre.titre[sizeof(livre.titre) - 1] = '\0';
    strncpy(livre.auteur, auteur, sizeof(livre.auteur) - 1);
    livre.auteur[sizeof(livre.auteur) - 1] = '\0';
    livre.annee = annee;

    return livre;
}

int main() {
    struct Livre monLivre = creerLivre("Le Petit Prince", "Antoine de Saint-Exupery", 1943);

    printf("Titre : %s\n", monLivre.titre);
    printf("Auteur : %s\n", monLivre.auteur);
    printf("Annee : %d\n", monLivre.annee);

    return 0;
}
