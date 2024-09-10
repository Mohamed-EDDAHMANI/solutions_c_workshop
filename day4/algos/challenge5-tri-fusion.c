#include <stdio.h>

void fusionner(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int gauche[n1], droite[n2];

    for (i = 0; i < n1; i++)
        gauche[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        droite[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (gauche[i] <= droite[j]) {
            arr[k] = gauche[i];
            i++;
        } else {
            arr[k] = droite[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = gauche[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = droite[j];
        j++;
        k++;
    }
}

void tri_fusion(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        tri_fusion(arr, l, m);
        tri_fusion(arr, m + 1, r);

        fusionner(arr, l, m, r);
    }
}

int main() {
    int n;

    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les elements du tableau:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Tableau avant le tri:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    tri_fusion(arr, 0, n - 1);

    printf("Tableau après le tri:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
