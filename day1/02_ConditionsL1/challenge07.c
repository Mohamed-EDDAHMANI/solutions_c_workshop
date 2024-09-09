#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    if (caractere >= 65 && caractere <= 90) {  
        printf("Le caractère '%c' est une lettre majuscule.\n", caractere);
    } else {
        printf("Le caractère '%c' n'est pas une lettre majuscule.\n", caractere);
    }

    return 0;
}
