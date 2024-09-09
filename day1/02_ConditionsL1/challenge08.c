#include <stdio.h>

int main() {
    char Note;

    printf("Entrez la Note de l'etudiant : ");
    scanf("%d", &Note);

    if (Note < 10) {  
        printf("il est recalé.\n");
    } else if(Note < 10 && Note >= 12){
        printf("il obtient la mention passable.\n");
    }
    else if(Note < 12 && Note >= 14){
        printf(" il obtient la mention assez bien.\n");
    }
    else if(Note < 14 && Note >= 16){
        printf(" il obtient la mention bien.\n");
    }else{
        printf("  il obtient la mention très bien.\n");

    }

    return 0;
}
