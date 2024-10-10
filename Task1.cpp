#include <iostream>
#include <cmath>

int main()
{
    // Задача 1
    int a = 10;
    int b = 7;
    double c = 6.5;

    std::cout << "Triangle  a = 10  b = 7  c = 6, 5" << '\n';
    std::cout << "   P = " << a + b + c << '\n';

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    std::cout << "   S = " << area << '\n';
}