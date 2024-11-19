#include <iostream>

bool compareDigits(int a, int b) 
{
    int countA = 0, countB = 0;
    for (int digit = 0; digit <= 9; ++digit)
    {
        int tempA = a, tempB = b;
        int countDigitA = 0, countDigitB = 0;

        while (tempA > 0)
        {
            if (tempA % 10 == digit)
            {
                ++countDigitA;
            }
            tempA /= 10;
        }

        while (tempB > 0)
        {
            if (tempB % 10 == digit)
            {
                ++countDigitB;
            }
            tempB /= 10;
        }

        if (countDigitA != countDigitB) 
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    int a, b;
    std::cout << "vuvedete dwe chisla: ";
    std::cin >> a >> b;

    if (compareDigits(a, b)) 
    {
        std::cout << "true";
    }
    else 
    {
        std::cout << "false";
    }
}
