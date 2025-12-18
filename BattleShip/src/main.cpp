#include <iostream>
#include "grille.h"
#include "bateau.h"
#include "font.h"

using namespace std;

int main() {
    cout << menuText() << endl ;

    int grille[10][10]; 
    //
    fullGrille(grille,10,10,0);
    //
    //cout << afficherGrille(grille,10,10) << endl ; 

    //cout<< grille[1][1]<<endl ; 
    
    // Placer un porte avion horizontal 

    setBateau(grille, 2, 3, 5, HORIZONTAL);
    // Placer un torpilleur vertical
    setBateau(grille, 5, 1, 5, VERTICAL);

    cout << afficherGrille(grille,10,10);
    
    return 0;
}
