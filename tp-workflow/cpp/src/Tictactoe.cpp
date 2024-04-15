#include "Tictactoe.hpp"

Jeu::Jeu()
    : _currentStatus(Status::RougeJoue)
{
    raz();
}

Status Jeu::getStatus() const
{
    return _currentStatus;
}

Cell Jeu::getCell(int i, int j) const 
{
    if(i < 3 && j < 3)
    {
        Cell cell = _plateau[j][i];
        return cell;
    }

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

void Jeu::SetCell(int i, int j, const Cell& cell)
{
    if(i < 3 && j < 3)
    {
        _plateau[j][i] = cell;
    }
}

bool Jeu::jouer(int i, int j) 
{
    if(getCell(i, j) == Cell::Vide)
    {
        SetCell(i, j, getColorToPlay());
        changeStatus();
        return true;
    }
    return false;
}

Cell Jeu::getColorToPlay()
{
    if(_currentStatus == Status::RougeJoue)
    {
        return Cell::Rouge;
    }
    else
    {
        return Cell::Vert;
    }    
}



void Jeu::changeStatus()
{
    if(_currentStatus == Status::RougeJoue)
    {
        _currentStatus = Status::VertJoue;
    }
    else if(_currentStatus == Status::VertJoue)
    {
        _currentStatus = Status::RougeJoue;
    }
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

void Jeu::CheckVictoire(Cell cell)
{
    for(int i = 0; i < 3; i++)
    {
        if((getCell(i, 0) == cell && getCell(i, 1) == cell && getCell(i, 2) == cell) ||
            (getCell(0, i) == cell && getCell(0, i) == cell && getCell(0, i) == cell))
        {

        }
    }
}
