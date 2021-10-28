#include <iostream>


bool bisectionMethod(double (*f)(double), double a, double b, double &x0, const double e = 0.001)
{
    while (std::abs(a - b) > e)
    {
        if (f(a) == 0.0)
        {
            x0 = a;
            return true;
        }

        if (f(b) == 0.0)
        {
            x0 = b;
            return true;
        }

        x0 = (a + b) / 2;

        double t = f(x0) * f(b);

        if (t == 0.0)
        {
            return true;
        }

        if (t > 0.0)
        {
            b = x0;
            continue;
        }

        if (t < 0.0)
        {
            a = x0;
            continue;
        }
    }
    

    return true;
}