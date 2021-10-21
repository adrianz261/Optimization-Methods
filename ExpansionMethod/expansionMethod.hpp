#include <array>
#include <utility>

using size = unsigned long int;

bool isEqual(double a, double b, const double e = 0.001)
{
    return std::abs(a - b) <= e ? true: false;
}

std::pair<double, double> expansionMethod(double (*f)(const double x), double x1 = 1, const double a = 1.1, const size iterMax = 1000)
{
    double y1 = f(x1);
    const double y0 = f(0.0);
    std::array<double, 3> x = {0.0};
    

    if (isEqual(y1, y0))
    {
        return std::pair<double, double> (0.0, x1);
    }

    if (y1 > y0)
    {
        x1 = -x1;
        y1 = f(x1);
           
        if (y1 >= y0)
        {
            return std::pair<double, double> (x1, -x1);
        }
    }

    for (size i = 1; i < iterMax; i++)
    {
        x[0] = x[1];
        x[1] = x[2];
        x[2] = a * x[1];

        if (f(x[1]) <= f(x[2]))
        {
            break;
        }
        
    }

    if (x[0] < x[2])
    {
        return std::pair<double, double> (x[0], x[2]);
    }

    return std::pair<double, double> (x[2], x[0]);
}