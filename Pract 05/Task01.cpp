#include <iostream>

bool isDigit(char symbol)
{
    return symbol >= '0' && symbol <= '9';
}

bool isUpper(char symbol)
{
    return symbol >= 'A' && symbol <= 'Z';
}

bool isLower(char symbol)
{
    return symbol >= 'a' && symbol <= 'z';
}

bool isAlpha(char symbol)
{
    return isUpper(symbol) || isLower(symbol);
}

bool isAlnum(char symbol)
{
    return isDigit(symbol) || isAlpha(symbol);
}

char capitalize(char symbol)
{
    return isLower(symbol) ? symbol - ('a' - 'A') : symbol;
}

char makeLower(char symbol)
{
    return isUpper(symbol) ? symbol + ('a' - 'A') : symbol;
}

int parseInt(char symbol)
{
    return isDigit(symbol) ? symbol - '0' : -1;
}

char toChar(int number)
{
    return number > 255 || number < 0 ? '\0' : number;
}

int myLog(int base, int num)
{
    if (base <= 1 || num <= 0)
    {
        return -1;
    }

    if (num == 1)
    {
        return 0;
    }

    int result = 0;
    int power = 1;

    while (power < num)
    {
        power *= base;
        result++;
    }

    return (power == num) ? result : -1;
}

int myPow(int num, int power)
{
    if (power == 0)
    {
        return 1;
    }

    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= num;
    }

    return result;
}

int myCeil(double num)
{
    return static_cast<int>(num) + 1;
}

int myFloor(double num)
{
    return static_cast<int>(num);
}

int myAbs(int num)
{
    return num >= 0 ? num : -num;
}