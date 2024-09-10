#include <stdio.h>

#define MAX 100 // Plage maximale des valeurs (0 à MAX)

void tri_par_comptage(int arr[], int n) {
    int count[MAX + 1] = {0};
    int sorted[n];

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 1; i <= MAX; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        sorted[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = sorted[i];
    }
}

int main() {
    int n;

    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les elements du tableau (valeurs entre 0 et %d):\n", MAX);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Tableau avant le tri:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    tri_par_comptage(arr, n);

    printf("Tableau après le tri:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
