#include <iostream>
int biggestCommonDivisor(int a, int b) {
    while (b > 0) {
        int temp = b;
        //b stava ostatuk ot a
        b = a % b;
        //a stava b
        a = temp;
    }
    return a;
}
int reduceNumerator(int numerator, int divisor) {
    return numerator /= divisor;
}
int reduceDenominator(int denominator, int divisor) {
    return denominator /= divisor;
}

int main()
{
    int numerator, denominator;
    // check for zero
    do {
        std::cout << "Enter two numbers: ";
        std::cin >> numerator >> denominator;
    } while (denominator == 0);

    //we find the number, by which we will be reducing
    int divisor = biggestCommonDivisor(numerator, denominator);

    int newNumerator = reduceNumerator(numerator, divisor);
    int newDenominator = reduceDenominator(denominator, divisor);
    std::cout << newNumerator << "/" << newDenominator;
    
}

