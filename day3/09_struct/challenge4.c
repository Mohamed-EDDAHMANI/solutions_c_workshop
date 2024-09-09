#include <stdio.h>
#include <stdlib.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point *pointeurPoint;

    pointeurPoint = (struct Point *)malloc(sizeof(struct Point));
    if (pointeurPoint == NULL) {
        printf("Erreur d'allocation memoire.\n");
        return 1;
    }

    pointeurPoint->x = 10.5;
    pointeurPoint->y = 20.5;

    printf("Coordonnee x : %.2f\n", pointeurPoint->x);
    printf("Coordonnee y : %.2f\n", pointeurPoint->y);

    free(pointeurPoint);

    return 0;
}
