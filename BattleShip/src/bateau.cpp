#include "bateau.h"
#include "../include/utils.h"
#include "grille.h"

using namespace std;

const char alpha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

// Fonction qui place UN bateau dans la grille
void setBateau(
    int grille[MAX_LIGNES][MAX_COLONNES],int ligne, int colonne, int type,int orientation
) {

    int taille = 0;

    // Déterminer la taille du bateau selon son type
    if (type == type_TORPILLEUR)
        taille = taille_TORPILLEUR;
    else if (type == type_SOUS_MARIN)
        taille = taille_SOUS_MARIN;
    else if (type == type_CONTRE_TORPILLEUR)
        taille = taille_CONTRE_TORPILLEUR;
    else if (type == type_CROISEUR)
        taille = taille_CROISEUR;
    else if (type == type_PORTE_AVIONS)
        taille = taille_PORTE_AVIONS;
    else
        return; // type invalide → on quitte la fonction

    // Placement horizontal
    if (orientation == HORIZONTAL) {

        // verif si bateau ne dépasse pas la grille
        if (colonne + taille > MAX_COLONNES)
            return;

        // Placer le bateau case par case
        for (int i = 0; i < taille; i++) {
            grille[ligne][colonne + i] = type;
        }
    }

    // vertical
    else if (orientation == VERTICAL) {

        // Vérifier que le bateau ne dépasse pas la grille
        if (ligne + taille > MAX_LIGNES)
            return;

        // Placer le bateau case par case
        for (int i = 0; i < taille; i++) {
            grille[ligne + i][colonne] = type;
        }
    }
}
