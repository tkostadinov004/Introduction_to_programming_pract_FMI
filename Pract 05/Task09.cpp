#include <iostream>

int sortDigitDescending(int num)
{
    int result = 0;

    for (int digit = 9; digit >= 0; digit--)
    {
        int tempNum = num;
        while (tempNum > 0)
        {
            if (tempNum % 10 == digit)
            {
                result = result * 10 + digit;
            }
            tempNum /= 10;
        }
    }

    return result;
}

int main()
{
    int num;
    std::cin >> num;
    int sortedNum = sortDigitDescending(num);
    std::cout << sortedNum;
}
