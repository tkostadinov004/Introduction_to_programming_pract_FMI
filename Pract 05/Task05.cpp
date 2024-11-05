#include <iostream>

int concat(int num1, int num2)
{
    int result = 0;

    int power = 1;

    while (num2 > 0)
    {
        result += num2 % 10 * power;
        num2 /= 10;
        power *= 10;
    }

    while (num1 > 0)
    {
        result += num1 % 10 * power;
        num1 /= 10;
        power *= 10;
    }

    return result;
}

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;

    std::cout << concat(num1, num2);
}