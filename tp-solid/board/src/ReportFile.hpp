#include <string>
#include "Reportable.hpp"


class ReportFile : public Reportable
{
public:

    ReportFile(std::string filename): _ofs(filename){}

    void report(Board board)
    {
        for (const std::string & item : board.getItems())
        _ofs << item << std::endl;
        _ofs << std::endl;
    }

private:
    std::ofstream _ofs;

};