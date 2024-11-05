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

bool checkIfSorted(int num)
{
    int reversedNum = reverseNum(num);
    short lastSeenDigit = reversedNum % 10;
    reversedNum /= 10;

    bool isSorted = true;
    while (reversedNum > 0)
    {
        if (reversedNum % 10 < lastSeenDigit)
        {
            isSorted = false;
            break;
        }
        lastSeenDigit = reversedNum % 10;
        reversedNum /= 10;
    }

    return isSorted;
}

int main()
{
    int num;
    std::cin >> num;
    std::cout << std::boolalpha << checkIfSorted(num);
}