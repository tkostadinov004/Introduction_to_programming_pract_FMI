#include <iostream>
unsigned long long checkNum() {
    long long num;
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    } while (num < 0);
    return num;
}
void sortNumber(unsigned long long num) {
    unsigned long long newNum = 0;
    for (int i = 9; i >= 0; i--) {
        unsigned long long duplicateNum = num;
        while (duplicateNum > 0) {
            if (duplicateNum % 10 == i) {
                newNum = newNum * 10 + i;
            }
            duplicateNum /= 10;
        }
    }
    //NOTE: didnt know if num is 089; how to output 980
    std::cout << newNum;
}
int main()
{
    unsigned long long num = checkNum();
    sortNumber(num);
}

