#include <iostream>

bool isValidNumber(unsigned num)
{
    int transformedNum = num / 1000 * 100 + num % 100;

    return transformedNum % 11 == 0;
}

void printValidNumbers(unsigned firstNum, unsigned secondNum)
{
    for (int num = firstNum; num <= secondNum; num++)
    {
        if (isValidNumber(num))
        {
            std::cout << num << " ";
        }
    }
}

int main()
{
    unsigned firstNum, secondNum;
    std::cin >> firstNum >> secondNum;

    printValidNumbers(firstNum, secondNum);
}