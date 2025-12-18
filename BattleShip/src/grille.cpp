#include "grille.h"
#include "../include/utils.h"

using namespace std;


void fullGrille(int grille[MAX_LIGNES][MAX_COLONNES],int lignes,int colonnes, int entier){
    for(int i=0;i<colonnes;i++){
        for(int j=0;j<lignes;j++){
            grille[i][j]=entier;
        }
    }
}




string afficherGrille(int grille[MAX_LIGNES][MAX_COLONNES], int lignes , int colonnes){
    string sortie = "";
    for(int i=0; i<colonnes ;i++){
        for(int j=0; j<lignes ;j++){
            sortie += toString(grille[i][j]);
            sortie +=" ";

            //debug cout << grille[i][j] ;
    }
    sortie +="\n";
    }
    return sortie;
}


#include "grille.h"

// Fonction qui vérifie si un bateau peut être placé dans la grille
bool verifierPlacementValide(
    int grille[MAX_LIGNES][MAX_COLONNES], // Grille de jeu
    int ligneDepart,                      // Ligne de départ
    int colonneDepart,                   // Colonne de départ
    int typeBateau,                      // type du bateau
    int orientation                      // Orientation (HORIZONTAL / VERTICAL)
) {
    int taille = 0;

    // Déterminer la taille du bateau selon son type
    if (typeBateau == type_TORPILLEUR)
        taille = taille_TORPILLEUR;
    else if (typeBateau == type_SOUS_MARIN)
        taille = taille_SOUS_MARIN;
    else if (typeBateau == type_CONTRE_TORPILLEUR)
        taille = taille_CONTRE_TORPILLEUR;
    else if (typeBateau == type_CROISEUR)
        taille = taille_CROISEUR;
    else if (typeBateau == type_PORTE_AVIONS)
        taille = taille_PORTE_AVIONS;
    else
        return false; // type inconnu

    // ----- Placement horizontal -----
    if (orientation == HORIZONTAL) {

        // Vérifier si le bateau dépasse à droite
        if (colonneDepart + taille > MAX_COLONNES)
            return false;

        // Vérifier chaque case du bateau
        for (int i = 0; i < taille; i++) {

            // Si une case est déjà occupée
            if (grille[ligneDepart][colonneDepart + i] != 0)
                return false;
        }
    }

    // ----- Placement vertical -----
    else if (orientation == VERTICAL) {

        // Vérifier si le bateau dépasse en bas
        if (ligneDepart + taille > MAX_LIGNES)
            return false;

        // Vérifier chaque case du bateau
        for (int i = 0; i < taille; i++) {

            // Si une case est déjà occupée
            if (grille[ligneDepart + i][colonneDepart] != 0)
                return false;
        }
    }
    else {
        return false; // Orientation invalide
    }

    // Si toutes les vérifications sont bonnes
    return true;
}


















string genereGrille(int l , int h){
    string mer = "[~]";
    string destroyBot = "[*]";
    const char alpha[26] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
     };

    int tab[l][h];
    string sortie = "";


    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < l; j++)
        {
            tab[i][j]=1;
        }
    }
    sortie += "[ ]";
    for(int i = 0 ; i < l; i++ ){
        sortie += "[";
        sortie += toString(i+1);
        sortie += "]";
    }
    sortie +="\n";


    for (int i = 0; i < h; i++)
    {
        sortie += "[" ;
        sortie += alpha[i];
        sortie += "]";
        for (int j = 0; j < l; j++)
        {
            if(tab[i][j]==1){
                sortie += mer ;
            }
            else {               
                sortie += destroyBot ;
            }

        }
        
    }
    sortie += "\n";

    return sortie ;
}
