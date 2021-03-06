#include <iostream>
#include "regulaFalsi.hpp"

double y(const double x)
{
    return x * x * x -1.2;
}

int main()
{
    double x0 = 0.0;
    
    if (regulaFalsi(y, x0, -2.0, 3.0))
    {
        std::cout << x0 << '\n';
    }

    return 0;
}