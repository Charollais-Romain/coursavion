#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Piece
{
    public:

    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();

    private:

    int symb;
    int posL;
    int posC;
    std::string nom;
    int type;
};

#endif