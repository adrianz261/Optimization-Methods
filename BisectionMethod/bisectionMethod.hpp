/**
 * Bisection method
 * 
 * Date: 28.10.2021
 * Author: A. Zuchowski
*/

template<typename T>
T abs(const T a)
{
    return (a >= 0) ? a : -a;
}

bool bisectionMethod(double (*f)(double), double a, double b, double &x0, const double e = 0.001)
{
    while (abs(a - b) > e)
    {
        const double fa = f(a);
        const double fb = f(b);

        if (fa == 0.0)
        {
            x0 = a;
            return true;
        }

        if (fb == 0.0)
        {
            x0 = b;
            return true;
        }

        x0 = (a + b) / 2;
        const double fx0 = f(x0);

        if (fx0 == 0.0)
        {
            return true;
        }
        if (fa * fx0 < 0.0)
        {
            b = x0;
        }
        else if (fb * fx0 < 0.0)
        {
            a = x0;
        }
        else
        {
            return false;
        }
    }

    return true;
}