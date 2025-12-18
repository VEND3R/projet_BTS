#ifndef BATEAU_H
#define BATEAU_H

#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <regex>
#include <time.h>
#include <math.h>
#include <unistd.h>
///////////////////////////////////////////////////:
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


#define HORIZONTAL 0
#define VERTICAL 1



void place1Bateau(int grille[MAX_LIGNES][MAX_COLONNES],int lignes,int colonnes,int type,int orientation);





using namespace std;



#endif