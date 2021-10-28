#include <iostream>
#include "bisectionMethod.hpp"

double x3(double x)
{
    return (x - 2.5) * (x - 2.5) * (x - 2.5);
}

int main()
{
    double y;

    bisectionMethod(x3, 0, 5, y);

    std::cout << y << '\n';
    return 0;
}