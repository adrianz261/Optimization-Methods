#include <iostream>
#include "bisectionMethod.hpp"

double x3(double x)
{
    return -(x - 1.5) * (x - 1.5) * (x - 1.5);
}

int main()
{
    double y = 0.0;

    if (bisectionMethod(x3, -1.6, 10.0, y, 0.00001))
    {
        std::cout << y << '\n';
    }
    return 0;
}