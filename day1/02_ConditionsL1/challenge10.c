#include <stdio.h>

int main() {
    int day ;
    int mounth;
    int year;

    printf("Entrez la date \n");
    printf("- day 00: ");
    scanf("%d", &day);
    printf("- mounth 00: : ");
    scanf("%d", &mounth);
    printf("- year 0000: : ");
    scanf("%d", &year);

    switch (mounth)
    {
    case 01:
        printf("%d-janvier-%d",day, year);
        break;
    
    case 02:
        printf("%d-fevrier-%d",day, year);
        break;
    
    case 03:
        printf("%d-mars-%d",day, year);
        break;
    
    case 04:
        printf("%d-avril-%d",day, year);
        break;
    
    case 05:
        printf("%d-mai-%d",day, year);
        break;
    
    case 06:
        printf("%d-juin-%d",day, year);
        break;
    
    case 07:
        printf("%d-juillet-%d",day, year);
        break;
    
    case 8:
        printf("%d-aout-%d",day, year);
        break;
    
    case 9:
        printf("%d-septembre-%d",day, year);
        break;
    
    case 10:
        printf("%d-octobre-%d",day, year);
        break;
    
    case 11:
        printf("%d-novembre-%d",day, year);
        break;
    
    case 12:
        printf("%d-decembre-%d",day, year);
        break;
    
    default:
        break;
    }

    return 0;
}
