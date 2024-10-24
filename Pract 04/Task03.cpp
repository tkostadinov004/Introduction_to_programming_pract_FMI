#include <iostream>

int main()
{
    int binaryNum;
    std::cin >> binaryNum;

    int power = 0;
    int decimal = 0;
    int base = 1;

    while (binaryNum)
    {
        int last_digit = binaryNum % 10;
        binaryNum /= 10;
        decimal += last_digit * base;
        base = base * 2;
    }
    std::cout << decimal;
}