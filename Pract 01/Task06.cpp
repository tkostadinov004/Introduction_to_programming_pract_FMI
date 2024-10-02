

#include <iostream>

int main()
{
    int pin;
    std::cout << "Enter personal identification number: ";
    std::cin >> pin;

    //get last three digits
    int lastThreeDigits = pin % 1000;

    //add symbols
    std::cout << "*******" << lastThreeDigits;

}

