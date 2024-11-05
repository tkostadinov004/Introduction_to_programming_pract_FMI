#include <iostream>

bool isPrime(int num)
{
    bool isPrime = false;
    for (int j = 2; j <= num; j++)
    {
        if (j != num && num % j == 0)
        {
            isPrime = false;
            break;
        }
        else
        {
            isPrime = true;
        }
    }
    return isPrime;
}

bool sumIsSingleDigit(int num)
{
    int sumOfNum = 0;
    int tempNum = num;
    while (tempNum > 0)
    {
        sumOfNum += tempNum > 9 ? tempNum % 10 : tempNum;
        tempNum /= 10;
    }

    return sumOfNum < 10 ? true : false;
}

int main()
{
    int lastNum;
    std::cin >> lastNum;

    for (int num = 101; num <= lastNum; num++)
    {
        if (isPrime(num) && sumIsSingleDigit(num))
        {
            std::cout << num << " ";
        }
    }
}