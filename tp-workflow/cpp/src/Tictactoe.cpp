#include "Tictactoe.hpp"

Jeu::Jeu() 
{
    raz();
}

Status Jeu::getStatus() const
{
    // TODO
    return Status::RougeJoue;
}

Cell Jeu::getCell(int i, int j) const 
{
    // TODO
    return _plateau[j][i];
}

std::ostream & operator<<(std::ostream & os, const Jeu & jeu)
{
    for(int i = 0; i < 3; i++)
    {
        os << std::endl;
        os << "---------" << std::endl;
        for(int j = 0; j < 3; j++)
        {
            os << "|";
            Cell cell = jeu.getCell(i, j);
            if(cell == Cell::Rouge)
            {
                os << "R";
            }
            else if(cell == Cell::Vert)
            {
                os << "V";
            }
            else
            {
                os << " ";
            }
            os << "|";
        }
    }
    os << std::endl;
    os << "---------" << std::endl;
    return os;
}

bool Jeu::jouer(int i, int j) 
{
    // TODO
    return false;
}

void Jeu::changeStatus()
{
    
}

void Jeu::raz() 
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            _plateau[j][i] = Cell::Vide;
        }
    }
}
