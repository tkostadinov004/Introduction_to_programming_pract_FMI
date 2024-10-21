#include <iostream>

int main()
{
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    if ((a >= b || a <= b) && (e >= d || e <= d) && ((b >= c && b >= a) || (b <= c && b <= a)) && ((c >= b && c >= d) || (c <= b && c <= d)) && (d >= c && d >= e))
    {
        std::cout << "yes";
    }
    else
    {
        std::cout << "no";
    }
}
