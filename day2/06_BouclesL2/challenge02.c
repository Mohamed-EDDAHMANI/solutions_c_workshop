#include <stdio.h>

int main() {
    int N;

    printf("Entrer un nombre pair : ");
    scanf("%d", &N);

    if (N % 2 != 0) {
        printf("Veuillez entrer un nombre pair.\n");
        return 1;
    }

    for (int l = 1; l <= N / 2; l++) {
        for (int h = 0; h < (N / 2) - l; h++) {
            printf(" ");
        }

        for (int s = 0; s < (2 * l) - 1; s++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
