#include <iostream>
int reverseNumber(int number) {
    int duplicate = 0;
    while (number > 0) {
        int lastDigit = number % 10;
        duplicate = duplicate * 10 + lastDigit;
        number /= 10;
    }
    return duplicate;
}
int findExactDivisor(int divisor, int stopper) {
    for (int i = 0; i < stopper; i++) {
        divisor *= 10;
    }
    return divisor;
}

int findNeededNumber(int number, int stopper) {
    int divisor = findExactDivisor(1, stopper);
    return (number % divisor) / (divisor / 10);
}

int makeNewNumber(int number, int replacement, int index, int replace) {
    int divisor = findExactDivisor(1, index);
    int duplicate = number - number % divisor;
    duplicate = duplicate + divisor / 10 * replacement + number % (divisor / 10);
    //987654 321
    // k = 3
    //1000

    return duplicate;
    
}

int main()
{
    int m, n, k;
    std::cout << "Enter two numbers and the position you want to change: ";
    std::cin >> m >> n >> k;
    // 1234 5678 3
    int reversedM = reverseNumber(m);
    int reversedN = reverseNumber(n);
    //3
    int mNeededNumber = findNeededNumber(reversedM , k);
    //7
    int nNeededNumber = findNeededNumber(reversedN, k);
    //reversed num -- find nNeeded and replace with mNeeded
    //rabotim s n toest zamestvame 
    int newN = makeNewNumber(reversedN, mNeededNumber, k, nNeededNumber);
    int newM = makeNewNumber(reversedM, nNeededNumber, k, mNeededNumber);
    std::cout << reverseNumber(newM) << " " << reverseNumber(newN);
    
}
