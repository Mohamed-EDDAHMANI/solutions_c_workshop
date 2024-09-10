#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Entrez une chaîne de caractères : ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Chaîne en minuscules : %s\n", str);

    return 0;
}

