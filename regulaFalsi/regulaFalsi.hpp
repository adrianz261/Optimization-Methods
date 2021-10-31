using size = unsigned long long int;

bool regulaFalsi(double (*f)(const double), double &x0, double a, double b, const size iterMax = 1000000, const double e = 0.00001)
{
    if (f(a) * f(b) >= 0.0)
    {
        return false;
    }

    for (size i = 0; i < iterMax; ++i)
    {
        x0 = (a * f(b) - b * f(a))/(f(b) - f(a));
        const auto f0 = f(x0);

        if (f0 <= e && f0 >= -e)
        {
            break;
        }
        else if (f(x0) * f(a) < 0.0)
        {
            b = x0;
        }
        else
        {
            a = x0;
        }
    }
    return true;
}