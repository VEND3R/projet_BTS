#include <iostream>

#include "../include/utils.h"

using namespace std ;

string genarateCarac(int l , int h){
    /*
    0=vide
    1=mer
    2=bateau
    3=bateau touche 
    */
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


int main(){
    string mer = "[~]";
    string destroyBot = "[*]";
    cout << genarateCarac(5,10) ;
}

