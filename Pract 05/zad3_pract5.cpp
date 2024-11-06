#include <iostream>

bool isPerfect(unsigned n) 
{
    unsigned sum = 0;

    for (unsigned i = 1; i <= n / 2; i++) 
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum == n;
}

int main() 
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (isPerfect(n))
    {
        std::cout << "True";
    }
    else {
        std::cout << "False";
    }
}


