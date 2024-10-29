#include <iostream>

int main()
{
    int positiveNumber;
    do {
        std::cout << "Enter a positive number bigger than 1: ";
        std::cin >> positiveNumber;
    } 
    while (positiveNumber < 2 );
    int maxNumber = 0;
    // Maximum value for a 32-bit signed int
    int secondMaxNumber = 0;
    for (int i = 0; i < positiveNumber; i++) {
        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;
        if (number > maxNumber) {
            secondMaxNumber = maxNumber;
            maxNumber = number;
            
        }
        else if (number > secondMaxNumber && number < maxNumber) {
            secondMaxNumber = number;
        }
        
    }
    std::cout << maxNumber << " ";
    std::cout << secondMaxNumber;
}

