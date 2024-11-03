#include <iostream>

long sortedNumber(unsigned long number) {

    long sortedNumber = 0;

    for (int i = 9; i >= 0; i--)
    {
        int tempNumber = number;

        while (tempNumber > 0)
        {
            int digit = tempNumber % 10;

            if (digit == i)
            {
                sortedNumber *= 10;
                sortedNumber += digit;
            }

            tempNumber /= 10;
        }
    }
    return sortedNumber;
}

int main()
{
    unsigned long number;

    std::cin >> number;

    std::cout << sortedNumber(number);

}