#include <iostream>

bool isPrime(unsigned n) 
{
    if (n < 2) 
    return false;
   
    for (unsigned j = 2; j * j <= n; j++)
    {
        if (n % j == 0) 
        {
            return false;
        }
    }
    return true;
}

unsigned sumOfDigits(unsigned n)
{
    unsigned sum = 0;
    while (n > 0) 
    {
        sum += n% 10;
        n /= 10;
    }
    return sum;
}

void findSpecialPrimes(unsigned upperBound)
{
    for (unsigned i = 101; i <= upperBound; i++) 
    {
        if (isPrime(i) && sumOfDigits(i) < 10) 
        {
            std::cout << i << " ";
        }
    }
}
int main()
{
    int upperBound;
    std::cin >> upperBound;

    findSpecialPrimes(upperBound);

    return 0;
}
