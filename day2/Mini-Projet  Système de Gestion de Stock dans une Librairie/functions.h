#define MAX_BOOKS 100


void creerLivre(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int livreCount);

void AfficherLivresDisponibles(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int livreCount);
    
  
void modifierQuantite(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int livreCount);


void SupprimerLivre(char titres[MAX_BOOKS][50], char auteurs[MAX_BOOKS][50], float prix[MAX_BOOKS], int quantite[MAX_BOOKS], int *livreCount);

int NombreStock(int quantite[MAX_BOOKS], int livreCount);


