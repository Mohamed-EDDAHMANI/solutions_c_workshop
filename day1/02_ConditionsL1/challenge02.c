#include<stdio.h>

int main(){
    char c;
    printf("Entrer un caractère (miniscule) : ");
    scanf("%c",&c);

    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("le caractère est voyelle ");
        break;
    
    default:
    printf("Le caractère '%c' n'est pas une voyelle.\n", c);
        break;
    }
}