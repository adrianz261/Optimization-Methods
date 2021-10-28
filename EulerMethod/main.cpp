#include <iostream>
#include "eulerMethod.hpp"

double sq(double x, double y)
{
    return y;
}

int main()
{
    std::array<std::pair<double, double>, 10000> result;
    result[0] = std::make_pair(0.0, 1.0);
    euler(sq, result, 0.001);
    
    for (const auto v : result)
    {
        std::cout << v.first << "\t" << v.second << '\n';
        if (v.first >= 4.0)
        {
            break;
        }
    }
    return 0;
}