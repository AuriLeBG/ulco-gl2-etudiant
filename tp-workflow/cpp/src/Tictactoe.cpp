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
    // TODO
    return os;
}

bool Jeu::jouer(int i, int j) 
{
    // TODO
    return false;
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

std::string Jeu::getCellString(int i, int j)
{
    Cell cell = getCell(i, j);
    if(cell == Cell::Rouge)
    {
        return "R";
    }
    if(cell == Cell::Vert)
    {
        return "V";
    }
    return " ";
}