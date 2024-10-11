#include <iostream>

int main()
{
    double a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;
    
    double divisor = (a2 * a2 + b2 * b2);
    double r = (a1 * a2 + b1 * b2) / divisor;
    double i = (a2 * b1 - a1 * b2) / divisor;
    
    std::cout << r << " + " << i << "i";
}
