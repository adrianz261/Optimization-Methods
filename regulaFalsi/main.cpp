#include <iostream>
#include "regulaFalsi.hpp"

double y(const double x)
{
    return x * x * x -1.2;
}

double y2(const double x)
{
    return x * x * x - x * x + 2;
}

int main()
{
    double x0 = 0.0;
    
    if (regulaFalsi(y2, x0, -200.0, 300.0))
    {
        std::cout << x0 << '\n';
    }

    return 0;
}