#include <stdio.h>

int main() {
    float x1, y1, x2, y2;
    float px, py;

    printf("Entrez les coordonnées de la première extrémité du segment (x1 y1) : ");
    scanf("%f %f", &x1, &y1);

    printf("Entrez les coordonnées de la deuxième extrémité du segment (x2 y2) : ");
    scanf("%f %f", &x2, &y2);

    printf("Entrez les coordonnées du point à tester (px py) : ");
    scanf("%f %f", &px, &py);

    float crossProduct = (px - x1) * (y2 - y1) - (py - y1) * (x2 - x1);
    
    if (crossProduct != 0) {
        printf("Le point ne se trouve pas sur le segment.\n");
    } else {
        if (px >= (x1 < x2 ? x1 : x2) && px <= (x1 > x2 ? x1 : x2) &&
            py >= (y1 < y2 ? y1 : y2) && py <= (y1 > y2 ? y1 : y2)) {
            printf("Le point se trouve sur le segment.\n");
        } else {
            printf("Le point ne se trouve pas sur le segment.\n");
        }
    }

    return 0;
}
