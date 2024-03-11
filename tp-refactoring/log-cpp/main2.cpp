#include <fstream>
#include <functional>
#include <iostream>

using logFunc_t = std::function<void(const std::string &)>;

int add3(int n) {
    return n+3;
}

int mul2(int n) {
    return n*2;
}

void f1(const std::string& str)
{
    std::ofstream fs;
    fs.open("test.txt");
    fs << str;
    fs.close();
}

std::ofstream ofs("log2f.txt")
logFunc_t f2 = [&ofs](const std::string& str)
{
    ofs << str
};

int main() {
    std::cout << "this is log-cpp" << std::endl;
    std::ofstream fs;
    fs.open("test.txt");
    mycomputefile(
    fs.close();

    return 0;
}

int mycomputefile(logFunc_t,int v0)
{
    std::string aaa;
    aaa = "add3 " + std::to_string(v0) + "\n";
    logFunc_t(aaa);
    const int v1 = add3(v0);
    aaa = "mul2 " + std::to_string(v1) + "\n";
    const int v2 = add3(v1); 
    return 0;
}

