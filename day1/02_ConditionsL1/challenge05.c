#include <stdio.h>

#define DAYS_IN_YEAR 365
#define DAYS_IN_MONTH 30
#define HOURS_IN_DAY 24
#define MINUTES_IN_HOUR 60
#define SECONDS_IN_MINUTE 60

void convertYears(int years) {
    int months, days, hours, minutes, seconds;

    months = years * 12; 
    days = years * DAYS_IN_YEAR;
    hours = days * HOURS_IN_DAY; 
    minutes = hours * MINUTES_IN_HOUR; 
    seconds = minutes * SECONDS_IN_MINUTE; 

    printf("\n%d années équivaut à :\n", years);
    printf("%d mois\n", months);
    printf("%d jours\n", days);
    printf("%d heures\n", hours);
    printf("%d minutes\n", minutes);
    printf("%d secondes\n\n", seconds);
}

int main() {
    int choice, years;

    do {
        printf("Menu de conversion d'années\n");
        printf("1. Convertir une année\n");
        printf("2. Quitter\n");
        printf("Choisissez une option (1 ou 2) : ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Entrez le nombre d'années à convertir : ");
                scanf("%d", &years);
                
                convertYears(years);
                break;

            case 2:
                printf("Sortie du programme...\n");
                break;

            default:
                printf("Option invalide, veuillez réessayer.\n");
        }
    } while(choice != 2);

    return 0;
}
