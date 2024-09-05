#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MIN 1
#define TAILLE_MAX 100

char generer_caractere_aleatoire() {
    int type = rand() % 3; 

    if (type == 0) {
        return 'A' + rand() % 26; 
    } else if (type == 1) {
        return 'a' + rand() % 26; 
    } else {
        return '0' + rand() % 10;
    }
}

int main() {
    int n;
    


    printf("Entrez la longueur du mot de passe (entre %d et %d): ", TAILLE_MIN, TAILLE_MAX);
    scanf("%d", &n);

    if (n < TAILLE_MIN || n > TAILLE_MAX) {
        printf("Veuillez entrer une longueur valide.\n");
        return 1;
    }

    char mot_de_passe[n];

    for (int i = 0; i < n; i++) {
        mot_de_passe[i] = generer_caractere_aleatoire();
    }

    mot_de_passe[n] = '\0';

    printf("Mot de passe genere: %s\n", mot_de_passe);

    return 0;
}
