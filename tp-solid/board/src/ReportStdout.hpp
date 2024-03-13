
#include <string>
#include "Board.hpp"
#include "Itemable.hpp"


class ReportStdout
{
public:
    ReportStdout()
    {

    }

    void reportStdout(Board board)
    {
        for (const std::string & item : board.getItems())
            std::cout << item << std::endl;
        std::cout << std::endl;
    }
    
};