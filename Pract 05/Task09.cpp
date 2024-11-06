#include <iostream>
unsigned long long checkNum() {
    long long num;
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    } while (num < 0);
    return num;
}
int countDigits(int divider, unsigned long long num, unsigned long long newNumber) {
    while (num > 0) {
        if (num % 10 == divider) {
            newNumber = newNumber * 10 + divider;
        }
        num /= 10;
    }
    return newNumber;
}
int findNewNumber(unsigned long long num, unsigned long long newNumber) {
    unsigned long long newSum = 0;
    for (int i = 9; i >= 0; i--) {
        //for each num new function
        unsigned long long currentBiggestNum = countDigits(i, num, newNumber);
        //if function does not return 0 and i  is not 0
        if (currentBiggestNum != 0 && i != 0) {
            newSum = newSum * 10 + currentBiggestNum;
        }
        //if function returns 0, but it's zero's turn
        else if(currentBiggestNum == 0 && i == 0){
            newSum = newSum * 10 + currentBiggestNum;
        }
    }
    return newSum;
}
int main()
{
    unsigned long long num = checkNum();
    unsigned long long newNumber = 0;
    std::cout << findNewNumber(num, newNumber);
}
