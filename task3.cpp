#include <iostream>

int main()
{
    double a = 0;
    double b = 0;
    double capture1 = 0;
    double capture2 = 0;
    std::cout << "input a and b: ";
    std::cin >> a;
    std::cin >> b;
    std::cout << "b is: " << b << " meanwhile a is: " << a <<std::endl;
    capture1= b;
    capture2 = a;
    a = capture1;
    b = capture2;
    std::cout << "flipped b is: " << b << "  and flipped a is: " << a;
}