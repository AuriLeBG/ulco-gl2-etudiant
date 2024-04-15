#pragma once
#include "Board.hpp"

class Reportable
{
    public:
    virtual void report(Board board) = 0;
};
