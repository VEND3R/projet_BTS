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

            cout << grille[i][j] ;
    }
    sortie +="\n";
    }
    return sortie;
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
