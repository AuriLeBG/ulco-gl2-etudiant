#include "Tictactoe.hpp"

using namespace std;

int main()
{
    Jeu jeu;
    int x;
    int y;
    Status currentStatus = jeu.getStatus();
    while(currentStatus == Status::RougeJoue || currentStatus == Status::VertJoue)
    {
        std::cout << "Saisir le coup" << std::endl;
        std::cout << "x: ";
        std::cin >> x;
        std::cout << "y: ";
        std::cin >> y;
        jeu.jouer(x, y);
    
        std::cout << jeu;
        currentStatus = jeu.getStatus();
    }
    return 0;
}

