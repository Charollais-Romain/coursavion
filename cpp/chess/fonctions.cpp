#include "fonctions.h"
#include <iostream> 

void resetplateau(wchar_t (&plateau)[u][u]) {
    wchar_t temp[u][u] = {
        {L'8', L'♜', L'♞', L'♝', L'♛', L'♚', L'♝', L'♞', L'♜'},
        {L'7', L'♟', L'♟', L'♟', L'♟', L'♟', L'♟', L'♟', L'♟'},
        {L'6', L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '},    // Cases vides
        {L'5', L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '},
        {L'4', L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '},
        {L'3', L' ', L' ', L' ', L' ', L' ', L' ', L' ', L' '},
        {L'2', L'♙', L'♙', L'♙', L'♙', L'♙', L'♙', L'♙', L'♙'},  // Pions blancs
        {L'1', L'♖', L'♘', L'♗', L'♕', L'♔', L'♗', L'♘', L'♖'},
        {L' ', L'A', L'B', L'C', L'D', L'E', L'F', L'G', L'H'}   // Pièces blanches
    };
    
    for (int i = 0; i < u; ++i) {
        for (int j = 0; j < u; ++j) {
            plateau[i][j] = temp[i][j];
        }
    }
}

void afficherPlateau(wchar_t plateau[u][u]) {
    for (int i = 0; i < u; ++i) {
        for (int j = 0; j < u; ++j) {
            std::wcout << plateau[i][j] << L" ";
        }
        std::wcout << std::endl;
    }
}

// int menu(){
//     while(true){
//         int chx;
//         std::cout << "\nBienvenue dans ce programme de jeu d'échec." << std::endl;
//         std::cout << "1: Commencer une nouvelle partie" << std::endl;
//         std::cout << "2: Touches" << std::endl;
//         std::cout << "3: Règles du jeu" << std::endl;
//         std::cout << "4: Quitter le jeu" << std::endl;
//         std::cin >> chx;
//         switch (chx){
//             case 1:
//                 return 1;
//             default:
//                 std::cout << "Veuillez sélectionner une option ci-dessus"
//                 break
//         }
//     }
// }