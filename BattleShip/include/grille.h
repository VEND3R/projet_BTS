#ifndef GRILLE_H
#define GRILLE_H

#include <string>

#define MAX_LIGNES 10
#define MAX_COLONNES 10



using namespace std;

string afficherGrille(int grille[MAX_LIGNES][MAX_COLONNES],
                    int lignes,
                    int colonnes);
void fullGrille(int grille[MAX_LIGNES][MAX_COLONNES],int lignes,int colonnes, int entier);

#endif
