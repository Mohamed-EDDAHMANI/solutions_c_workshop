#include <stdio.h>
#include <string.h>
#include "functions.h"

#define MAX_BOOKS 100

void creerLivre(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int livreCount){

    printf("Entre le titre :");
    scanf(" %[^\n]", titres[livreCount]);
    printf("Entre le auteur :");
    scanf(" %[^\n]", auteurs[livreCount]);
    printf("Entre le prix :");
    scanf("%f", &prix[livreCount]);
    printf("Entre le Quantite :");
    scanf("%d", &quantite[livreCount]);

}

void AfficherLivresDisponibles(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int livreCount){
    if (livreCount == 0) {
        printf("------------------ || Aucun livre disponible. || ------------------\n");
        return;
    }
    for(int i = 0 ; i < livreCount ; i++){
        printf("-------------- || Livre %d || -------------- \n", i + 1);
        printf("--------------Titre: %s\n", titres[i]);
        printf("--------------Auteur: %s\n", auteurs[i]);
        printf("--------------Prix: %.2f\n", prix[i]);
        printf("--------------Quantite: %d\n", quantite[i]);
        printf("--------------------------------------------\n");
    }
}

void modifierQuantite(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int livreCount){
    int  nouvelleQuantite, indexOfLivre = -1;
    char titreRecherche[50] ;
    if (livreCount == 0) {
        printf("------------------ || Aucun livre disponible. || ------------------\n");
        return;
    }

    printf("le titre du livre rechercher : ");
    scanf(" %[^\n]", titreRecherche);
    printf("Veuillez Entrez la nouvelle quantite : ");
    scanf("%d", &nouvelleQuantite);
    
    for(int i = 0 ; i < livreCount ; i++){
        if (strcasecmp(titres[i], titreRecherche) == 0){
            indexOfLivre = i;
            break;
        }
    }
    if(indexOfLivre == -1){
        printf("--- Vous n'avez pas cette livre ou vous tapez le mauvais nom ---\n");
    }else{
        quantite[indexOfLivre] = nouvelleQuantite ;
    }

}

void SupprimerLivre(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int *livreCount){
    int indexOfLivre = -1;
    char titreRecherche[50] ;
    if (livreCount == 0) {
        printf("------------------ || Aucun livre disponible. || ------------------\n");
        return;
    }

    printf("le titre du livre rechercher : ");
    scanf(" %[^\n]", titreRecherche);

    for(int i = 0 ; i < *livreCount ; i++){
        if (strcasecmp(titres[i], titreRecherche) == 0){
            indexOfLivre = i;
            break;
        }
    }

    for(int i = indexOfLivre ; i < *livreCount - 1 ; i++){
        if(titres[i] != '\0'){
            strcpy(titres[i] , titres[i + 1]);
            strcpy(auteurs[i] , auteurs[i + 1]);
            prix[i] = prix[i + 1];
            quantite[i] = quantite[i + 1];
        }
    }
    (*livreCount)-- ;
    printf("Le livre a été supprimé avec succès.\n");
}

int NombreStock(int quantite[MAX_BOOKS], int livreCount){
    int somme = 0;

    for(int i = 0 ; i < livreCount ; i++){
        somme += quantite[i] ;
    }
    return somme ;

}
