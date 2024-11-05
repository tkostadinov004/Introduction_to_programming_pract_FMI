#include <iostream>

bool areDigitsSorted(int number) {
    if (number <= 0) {
        return false;
    }

    bool ascending = true; 
    bool descending = true; 

    int prevDigit = number % 10; 
    number /= 10; 

    while (number > 0) {
        int currentDigit = number % 10; 
        number /= 10; 

        if (currentDigit < prevDigit) {
            ascending = false; 
        }
        if (currentDigit > prevDigit) {
            descending = false; 
        }
        prevDigit = currentDigit; 
    }

    return ascending || descending; 
}

int main() {
    int number;
    std::cout << "Enter a natural number: ";
    std::cin >> number;

    if (areDigitsSorted(number)) {
        std::cout << "True." << std::endl;
    }
    else {
        std::cout << "False." << std::endl;
    }

    return 0;
}
