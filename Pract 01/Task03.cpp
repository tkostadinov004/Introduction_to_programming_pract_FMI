#include <iostream>

int main()
{
    double a, b, temp;
    std::cin >> a >> b;

    temp = a, a = b, b = temp;
    
    std::cout << "a: " << a;
    std::cout << ", b: " << b;
}

