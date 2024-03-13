
#include "Board.hpp"
#include "ReportStdout.hpp"
#include "ReportFile.hpp"
#include "NumBoard.hpp"

void testBoard(Board & b, Reportable& report3) 
{
    std::cout << b.getTitle() << std::endl;
    b.add("item 1");
    b.add("item 2");
    ReportStdout report;
    report.report(b);
    ReportFile report2("tmp.txt");
    report2.report(b);
    report3.report(b);
}

void testNumBoard(NumBoard& b)
{
     std::cout << b.getTitle() << std::endl;
    b.add("item 1");
    b.add("item 2");
    ReportStdout report;
    report.report(b);
    ReportFile report2("tmp.txt");
    report2.report(b);
}

int main() 
{
    NumBoard b1;
    ReportFile report("test.txt");
    testBoard(b1, report);
    return 0;
}

