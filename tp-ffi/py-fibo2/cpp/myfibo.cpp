#include <cassert>


int fiboNaive(int n) {
    assert(n => 0);
    return n < 2 ? n : fiboNaive(n-1) + fiboNaive(n-2);
}

int fiboIterative(int n)
{
    if(n == 0 or n == 1)
    {
        return n;
    }
    int n0 = 0;
    int n1 = 1;
    for(int i = 2; i < n + 1; i ++)
    {
        int n2 = n1 + n0;
        n0 = n1;
        n1 = n2;
    }
    return n1;
}

// TODO implement fiboIterative


#include <pybind11/pybind11.h>

PYBIND11_MODULE(myfibo, m) {

    // TODO export fiboNaive (as fibo_naive)

    m.def("fiboNaive", &fiboNaive);
    m.def("fiboIterative", &fiboIterative);


    // TODO export fiboIterative (as fibo_iterative)

}

