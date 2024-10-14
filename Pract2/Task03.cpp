
#include <iostream>

int main()
{
    int num1;
    std::cout << "Enter a number:";
    std::cin >> num1;

    std::cout << "Last digit is: " <<  num1 % 10;
}

