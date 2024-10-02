#include <iostream>

int main()
{
    //I'll use double to include a wider range of numerical inputs.
    double number1;
    double number2;
    std::cout << "Enter two numbers: ";
    std::cin >> number1 >> number2;

    double temporaryVariable = number1;
    number1 = number2;
    number2 = temporaryVariable;

    std::cout << "Swaped variables: " << number1 << " and " << number2;

    
}

