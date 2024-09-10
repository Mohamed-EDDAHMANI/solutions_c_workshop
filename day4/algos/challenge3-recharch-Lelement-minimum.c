#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les elements du tableau:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int index_min = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index_min = i;
        }
    }

    printf("Valeur minimale: %d\n", min);
    printf("Index de la valeur minimale: %d\n", index_min);

    return 0;
}
