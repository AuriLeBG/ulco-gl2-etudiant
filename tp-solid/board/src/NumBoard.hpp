#include <string>
#include "Board.hpp"

class NumBoard : public Board
{
public:
    NumBoard()
    : _nTicket(1)
    , Board()
    {
    }

    void add(const std::string & t) override
    {
        std::string t2 = std::to_string(_nTicket) + "." + t;
        _nTicket ++;
        Board::add(t2);
    }

private:
    int _nTicket;


};