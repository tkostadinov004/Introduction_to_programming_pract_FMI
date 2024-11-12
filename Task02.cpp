#include <iostream>

void factorize(int n)
{
    int primes[100];
    int powers[100];
    int index = 0;

    int count = 0;
    while (n % 2 == 0)
    {
        count++;
        n /= 2;
    }
    if (count > 0)
    {
        primes[index] = 2;
        powers[index] = count;
        index++;
    }

    for (int i = 3; i * i <= n; i += 2) 
    {
        count = 0;
        while (n % i == 0) 
        {
            count++;
            n /= i;
        }
        if (count > 0)
        {
            primes[index] = i;
            powers[index] = count;
            index++;
        }
    }

    if (n > 2)
    {
        primes[index] = n;
        powers[index] = 1;
        index++;
    }


    for (int i = index - 1; i >= 0; i--)
    {
        std::cout << primes[i];
        if (powers[i] > 1) 
        {
            std::cout << "^" << powers[i];
        }
        if (i > 0)
        {
            std::cout << " * ";
        }
    }
}

int main() 
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Factorization of " << num << ": ";
    factorize(num);
}
