#include <stdio.h>
#include <string.h>

#define NOMBRE_NOTES 5

struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[NOMBRE_NOTES];
};

int main() {
    struct Etudiant etudiant;

    strcpy(etudiant.nom, "Martin");
    strcpy(etudiant.prenom, "Claire");

    for (int i = 0; i < NOMBRE_NOTES; i++) {
        etudiant.notes[i] = (i + 1) * 2; 
    }

    printf("Nom : %s\n", etudiant.nom);
    printf("Prenom : %s\n", etudiant.prenom);
    
    printf("Notes : ");
    for (int i = 0; i < NOMBRE_NOTES; i++) {
        printf("%d ", etudiant.notes[i]);
    }
    printf("\n");

    return 0;
}
