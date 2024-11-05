#include <iostream>

bool isPalindrom(int num)
{
    int reversedNum = 0;

    int tempNum = num;
    while (tempNum > 0)
    {
        reversedNum = reversedNum * 10 + tempNum % 10;
        tempNum /= 10;
    }

    return reversedNum == num;
}

int main()
{
    std::cout << std::boolalpha << isPalindrom(1221);
}