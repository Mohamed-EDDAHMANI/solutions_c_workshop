#include <stdio.h>

int main()
{
    int taille = 10;
    int tableau[] = {4, 5, 9, 3, 1, 7, 2, 6, 10, 8};
    int tmp;

    printf("{");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d -", tableau[i]);
    }
    printf("}\n");

    printf("Le tableau  apres le tri \n");
    for (int i = 0; i < taille - 1 ; i++)
    {
        for (int j = 0; j < taille - i - 1; j++)
        {
            if (tableau[j] > tableau[j + 1])
            {
                tmp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = tmp;
            }
        }
    }
    printf("{");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d -", tableau[i]);
    }
    printf("}");

    return 0;
}