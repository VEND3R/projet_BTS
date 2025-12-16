#include <iostream>

#include "../include/utils.h"

using namespace std;

void generate_grille(int grille[10][10]) {

    // En-tête colonnes (A → J)
    cout << "\n    ";
    for (int col = 0; col < 10; col++) {
        cout << " " << toCharacter(col) << " ";
    }
    cout << "\n";

    // Ligne de séparation
    cout << "    ---------------------------------------\n";

    // Parcours lignes
    for (int row = 0; row < 10; row++) {

        // Numéro de ligne
        if (row + 1 < 10)
            cout << " " << row + 1 << " |";
        else
            cout << row + 1 << " |";

        // Parcours colonnes
        for (int col = 0; col < 10; col++) {

            int cell = grille[row][col];

            switch (cell) {

                case 0: // Eau
                    cout << setTextColor(6, 0, false, false) << " ~ " << resetTextColor();
                    break;

                case 1: // Torpilleur
                    cout << setTextColor(6, 0, true, false) << " T " << resetTextColor();
                    break;

                case 2: // Sous-marin
                    cout << setTextColor(3, 0, true, false) << " S " << resetTextColor();
                    break;

                case 3: // Contre-torpilleur
                    cout << setTextColor(4, 0, true, false) << " C " << resetTextColor();
                    break;

                case 4: // Croiseur
                    cout << setTextColor(5, 0, true, false) << " R " << resetTextColor();
                    break;

                case 5: // Porte-avions
                    cout << setTextColor(2, 0, true, false) << " A " << resetTextColor();
                    break;

                default:
                    cout << " ? ";
                    break;
            }
        }

        cout << "\n";
    }

    cout << "\n";
}
