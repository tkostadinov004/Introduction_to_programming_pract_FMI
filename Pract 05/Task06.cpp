#include <iostream>

int reverseNum(unsigned num)
{
    int result = 0;
    while (num > 0)
    {
        result = result * 10 + num % 10;
        num /= 10;
    }

    return result;
}

int mirrorNum(unsigned num)
{
    int result = 0;

    int tempNum = num;
    while (tempNum > 0)
    {
        result = result * 10 + tempNum % 10;
        tempNum /= 10;
    }

    tempNum = reverseNum(num);
    while (tempNum > 0)
    {
        result = result * 10 + tempNum % 10;
        tempNum /= 10;
    }

    return result;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << mirrorNum(n);
}