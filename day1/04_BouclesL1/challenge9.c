#include <stdio.h>

int main() {
    int nombre;
    int compteur = 0;

    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    if (nombre < 0) {
        printf("Veuillez entrer un entier positif.\n");
    } else {
        if (nombre == 0) {
            compteur = 1;
        } else {
            while (nombre > 0) {
                nombre /= 10;
                compteur++;
            }
        }
        printf("Nombre de chiffres = %d\n", compteur);
    }

    return 0;
}
