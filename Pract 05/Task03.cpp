#include <iostream>

bool perfectNum(int num)
{
    int sumOfDivisors = 0;
    bool isPerfect = true;

    for (int divisor = num - 1; divisor > 0; divisor--)
    {
        if (num % divisor == 0)
        {
            sumOfDivisors += divisor;
            if (sumOfDivisors > num)
            {
                isPerfect = false;
                break;
            }
        }
    }

    if (sumOfDivisors != num)
    {
        isPerfect = false;
    }

    return isPerfect;
}

int main()
{
    std::cout << std::boolalpha << perfectNum(28);
}