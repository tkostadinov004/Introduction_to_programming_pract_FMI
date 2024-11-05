#include <iostream>

int sortDigitsDescending(int num) {
    int result = 0; 

    while (num > 0) {
        int digit = num % 10; 
        result = (result * 10) + digit; 
        num /= 10; 
    }
   
    int sortedResult = 0; 
    while (result > 0) {
        int maxDigit = 0; 
        int temp = result; 

        while (temp > 0) {
            int digit = temp % 10;
            if (digit > maxDigit) {
                maxDigit = digit;
            }
            temp /= 10; 
        }

        sortedResult = (sortedResult * 10) + maxDigit;

        temp = result;
        int newResult = 0; 
        bool found = false; 

        while (temp > 0) {
            int digit = temp % 10;
            if (digit == maxDigit && !found) {
                found = true; 
            }
            else {
                newResult = (newResult * 10) + digit; 
            }
            temp /= 10; 
        }

        result = newResult; 
    }

    return sortedResult; 
}

int main() {
    int number;
    std::cout << "Enter a natural number: ";
    std::cin >> number;

    int sortedNumber = sortDigitsDescending(number);
    std::cout << " " << sortedNumber << std::endl;

    return 0;
}
