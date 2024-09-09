#include <stdio.h>

struct Rectangle {
    float longueur;
    float largeur;
};

float calculerAire(struct Rectangle rect) {
    return rect.longueur * rect.largeur;
}

int main() {
    struct Rectangle monRectangle;

    monRectangle.longueur = 5.0;
    monRectangle.largeur = 3.0;

    float aire = calculerAire(monRectangle);

    printf("L'aire du rectangle est : %.2f\n", aire);

    return 0;
}
