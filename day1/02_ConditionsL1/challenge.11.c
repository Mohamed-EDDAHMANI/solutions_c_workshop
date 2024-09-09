#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  

int main() {
    const char *jours[] = {"Dimanche", "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"};

    srand(time(0));
    

    int index = rand() % 7;

    printf("Jour de la semaine sélectionné aléatoirement : %s\n", jours[index]);

    return 0 ;

}
