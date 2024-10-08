#include <iostream>

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    double P = 0;
    double S = 0;
    std::cout << "input a here: ";
    std::cin >> a;
    std::cout << "input b here: ";
    std::cin >> b;
    std::cout << "input c here: ";
    std::cin >> c;

    if (a >= b + c) {
        std::cout << "your triangle is messed up";
    }
    else if (b >= c + a) {
        std::cout << "your triangle is messed up";
    }
    else if (c >= a + b) {
        std::cout << "your triangle is messed up";
    }
    else {
        P = a + b + c;
        std::cout << "The perimeter of the triangle is " << P <<std::endl;
        S = sqrt((P / 2) * ((P / 2) - a) * ((P / 2) - b) * ((P / 2) - c));
        std::cout << "The area of the triangle is " << S;
    }
}

