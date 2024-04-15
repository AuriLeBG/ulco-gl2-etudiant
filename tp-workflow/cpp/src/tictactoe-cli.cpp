#include "Tictactoe.hpp"

using namespace std;

int main()
{

    Jeu jeu;
    jeu.jouer(2, 2);
    jeu.jouer(2, 1);
    jeu.jouer(1, 1);
    jeu.jouer(1, 1);


    std::cout << jeu;
    return 0;
}

