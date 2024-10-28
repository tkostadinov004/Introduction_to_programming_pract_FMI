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
    int secondMaxNumber = 0;
    for (int i = 0; i < positiveNumber; i++) {
        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;
        if (number > maxNumber) {
            maxNumber = number;
        }
        if (number > secondMaxNumber && number < maxNumber) {
            secondMaxNumber = number;
        }
    }
    std::cout << maxNumber << " ";
    std::cout << secondMaxNumber;
}

