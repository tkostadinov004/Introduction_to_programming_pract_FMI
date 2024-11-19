#include <iostream>

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


void sukr(int numerator, int denominator) 
{
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    std::cout << numerator << "/" << denominator;
}

int main()
{
    int numerator, denominator;
    std::cout << "vuvedete chislitel i znamenatel: ";
    std::cin >> numerator >> denominator;

    if (denominator == 0)
    {
        std::cout << "znamenatelqt ne moje da bude 0";
    }
    else
    {
        sukr(numerator, denominator);
    }
}

