#include <iostream>
#include <locale>
#include "fonctions.h"

int main() {
    std::setlocale(LC_ALL, "fr_FR.UTF-8");

    wchar_t plateau[u][u];
    resetplateau(plateau);
    afficherPlateau(plateau);

    return 0;
}
