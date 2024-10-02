#include <iostream>

int main()
{
    int number1;
    int number2;
    std::cout << "Enter two numbers: ";
    std::cin >> number1 >> number2;

    std::cout << std::boolalpha << (number1 % number2 == 0) << std::endl;
}

