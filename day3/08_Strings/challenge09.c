#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Entrez une chaîne de caractères : ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i]; 
        }
    }
    str[j] = '\0'; 

    printf("Chaîne sans espaces : %s\n", str);

    return 0;
}
