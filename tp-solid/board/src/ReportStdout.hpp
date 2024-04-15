
#include <string>
#include "Reportable.hpp"


class ReportStdout : public Reportable
{
public:
    
    void report(Board board)
    {
        for (const std::string & item : board.getItems())
            std::cout << item << std::endl;
        std::cout << std::endl;
    }
    
};