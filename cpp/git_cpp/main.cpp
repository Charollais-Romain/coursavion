#include <iostream>
#include "../fonctions/fonctions.h"


int afficherMenu() {
    int chx;
    std::cout << "\nChoisissez une option: ";
    std::cout << "\n1: Récupérer les fichiers du repo git de Romain";
    std::cout << "\n2: Création/Initialiser du dossier local";
    std::cout << "\n3: MAJ à partir du repo git de Romain";
    std::cout << "\n4: Uploader vers le repo git de Romain";
    std::cout << "\n5: Quitter le programme";
    std::cin >> chx;
    return chx;
}

int afficherMenu() {
    int chx;
    std::cout << "\nChoisissez une option: ";
    std::cout << "\n1: Récupérer les fichiers du repo git de Romain\n";
    std::cout << "\n2: Création/Initialiser du dossier local\n";
    std::cout << "\n3: MAJ à partir du repo git de Romain\n";
    std::cout << "\n4: Uploader vers le repo git de Romain\n";
    std::cout << "\n5: Quitter le programme\n";
    std::cin >> chx;
    return chx;
}
