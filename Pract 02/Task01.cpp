#include <iostream>

int main()
{
    double a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;
    
    double r = (a1 * a2 - b1 * b2);
    double i = (a1 * b2 + b1 * a2);
    
    std::cout << r << " + " << i << "i";
}
