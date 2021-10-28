/**
 * Eulers method
 * 
 * https://en.wikipedia.org/wiki/Euler_method
 * 
 * Author: A. Zuchowski 
*/
#include <array>
#include <utility>


template <size_t N>
void euler(double (*f)(double, double), std::array<std::pair<double, double>, N> &vect, const double h = 0.1, const size_t iterMax = 100000)
{
    if (N < 1)
    {
        return;
    }
    for (size_t i = 1; i < N; ++i)
    {
        vect[i].first = vect[i - 1].first + h;
        vect[i].second = vect[i - 1].second + h * f(vect[i - 1].first, vect[i- 1].second);
    }
}