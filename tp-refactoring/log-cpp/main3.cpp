#include <fstream>
#include <functional>
#include <iostream>

int add3(int n) {
    return n+3;
}

int mul2(int n) {
    return n*2;
}

struct AbstractMycompute {
    virtual ~AbstractMycompute() = default;
    virtual int mycompute(int v0) = 0;
};

struct Mycompute : AbstractMycompute {
    int mycompute(int v0) override {
        std::cout << "add3 " + std::to_string(v0) << std::endl;
        const int v1 = add3(v0);
        std::cout << "mul2 " + std::to_string(v1) << std::endl;
        const int v2 = add3(v1);
        return v2;
    }
};

int main() {
    std::cout << "this is log-cpp" << std::endl;

    Mycompute mc;
    const int res = mc.mycompute([](const std::string& str)
    {
        std::ofstream fs;
    fs.open("test.txt");
    fs << str;
    fs.close();
    }, 18);
    std::cout << res << std::endl;

    return 0;
}

