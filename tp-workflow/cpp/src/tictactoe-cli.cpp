#include "Tictactoe.hpp"

using namespace std;

int main() {

    cout << "TODO" << endl;
    Jeu jeu;
    for(int i = 0; i < 3; i++)
    {
        std::cout << std::endl;
        std::cout << "---------" << std::endl;
        for(int j = 0; j < 3; j++)
        {
            std::cout << "|" << jeu.getCellString(i, j) << "|";
        }
    }
    std::cout << std::endl;
    std::cout << "---------" << std::endl;

    return 0;
}

