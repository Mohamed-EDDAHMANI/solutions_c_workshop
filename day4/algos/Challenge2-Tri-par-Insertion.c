#include <stdio.h>

int main()
{
    int taille = 10;
    int tableau[] = {4, 5, 9, 3, 1, 7, 2, 6, 10, 8};

    printf("{");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d -", tableau[i]);
    }
    printf("}\n");

    printf("Le tableau  apres le tri \n");
    for (int i = 1; i < taille ; i++){
        int tmp = tableau[i];
        int j = i - 1 ;
        while (tmp < tableau[j] && j >= 0)
        {
            tableau[j + 1] = tableau[j];
            j-- ;
        }
        tableau[j + 1] = tmp ;
    }
    printf("{");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d -", tableau[i]);
    }
    printf("}");

    return 0;
}