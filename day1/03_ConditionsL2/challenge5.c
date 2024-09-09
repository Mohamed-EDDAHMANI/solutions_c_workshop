#include <stdio.h>

int main() {
    float budget;
    int destination;
    int nombrePersonnes;
    char typeVoyage[20];
    char destinationRecommandee[20];

    printf("Entrez le budget (en euros) : ");
    scanf("%f", &budget);

    printf("Entrez la destination (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &destination);

    printf("Entrez le nombre de personnes : ");
    scanf("%d", &nombrePersonnes);

    if (budget >= 1000) {
        strcpy(typeVoyage, "Voyage haut de gamme");
    } else if (budget >= 500) {
        strcpy(typeVoyage, "Voyage moyen");
    } else {
        strcpy(typeVoyage, "Voyage économique");
    }

    switch (destination) {
        case 1:
            if (budget >= 1000 && nombrePersonnes > 2) {
                strcpy(destinationRecommandee, "Plage");
            } else {
                strcpy(destinationRecommandee, "Non recommandé");
            }
            break;
        case 2:
            if (budget >= 500 && nombrePersonnes <= 2) {
                strcpy(destinationRecommandee, "Montagne");
            } else {
                strcpy(destinationRecommandee, "Non recommandé");
            }
            break;
        case 3:
            strcpy(destinationRecommandee, "Ville");
            break;
        default:
            strcpy(destinationRecommandee, "Destination invalide");
            break;
    }

    printf("Type de voyage recommandé : %s\n", typeVoyage);
    printf("Destination recommandée : %s\n", destinationRecommandee);

    return 0;
}
