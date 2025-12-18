#ifndef GRILLE_H
#define GRILLE_H

#include <string>

//
#define MAX_LIGNES 10
#define MAX_COLONNES 10
//
#define MAX_LIGNES 10
#define MAX_COLONNES 10

#define taille_TORPILLEUR 2
#define taille_SOUS_MARIN 3
#define taille_CONTRE_TORPILLEUR 3
#define taille_CROISEUR 4
#define taille_PORTE_AVIONS 5

#define type_TORPILLEUR 1
#define type_SOUS_MARIN 2
#define type_CONTRE_TORPILLEUR 3
#define type_CROISEUR 4
#define type_PORTE_AVIONS 5
//

#define HORIZONTAL 0
#define VERTICAL 1



using namespace std;

string afficherGrille(int grille[MAX_LIGNES][MAX_COLONNES],
                    int lignes,
                    int colonnes);

void fullGrille(int grille[MAX_LIGNES][MAX_COLONNES],int lignes,int colonnes, int entier);

bool verifierPlacementValide(
    int grille[MAX_LIGNES][MAX_COLONNES],
    int ligneDepart,
    int colonneDepart,
    int typeBateau,
    int orientation
);

#endif

