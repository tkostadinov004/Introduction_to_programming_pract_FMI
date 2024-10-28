#include <iostream>

int main()
{
    int twoBit;
    //add an int for final number
    int finalNumber = 0;
    //add a base 
    int base = 1; // for 2^0 = 1
    std::cout << "Enter a number in 2-bit binary system: ";
    std::cin >> twoBit;
    while (twoBit > 0) {
        //get last digit: 1 or 0
        int lastDigit = twoBit % 10;
        finalNumber += lastDigit * base;
        //the base multiplies each time -> 2^1, 2^2 and so on
        base *= 2;
        twoBit /= 10;
    }
    std::cout << finalNumber;
}

