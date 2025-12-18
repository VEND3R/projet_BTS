#include <iostream>
#include "grille.h"

using namespace std;

int main() {

    int grille[10][10]; 
    //
    fullGrille(grille,10,10,1);
    //
    cout << afficherGrille(grille,10,10) << endl ; 

    //cout<< grille[1][1]<<endl ; 
    

    return 0;
}
