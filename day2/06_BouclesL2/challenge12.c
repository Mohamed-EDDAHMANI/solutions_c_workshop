#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Le nombre d'elements doit etre positif.\n");
        return 1;
    }

    int tableau[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    printf("Tableau trie :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
