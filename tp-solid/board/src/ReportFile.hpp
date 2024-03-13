#include <string>
#include "Board.hpp"
#include "Itemable.hpp"


class ReportFile
{
public:

    ReportFile(std::string filename): _ofs(filename){}

    void reportFile(Board board)
    {
        for (const std::string & item : board.getItems())
        _ofs << item << std::endl;
        _ofs << std::endl;
    }

private:
    std::ofstream _ofs;

};