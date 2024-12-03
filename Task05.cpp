#include <iostream>

int extractLastKDigits(int num, int k)
{
    int power = 1;
    for (int i = 0; i < k; ++i)
    {
        power *= 10;
    }
    return num % power;
}

int removeLastKDigits(int num, int k) 
{
    int power = 1;
    for (int i = 0; i < k; ++i) 
    {
        power *= 10;
    }
    return num / power;
}

int main() 
{
    int a, b, k;
    std::cout << "vuvedete 3 chisla (a, b, k): ";
    std::cin >> a >> b >> k;

    if (k <= 0)
    {
        std::cout << "k trqbwa da e polojitelno";
        return 0;
    }

    int cuta = removeLastKDigits(a, k);

    std::cout << cuta << " " << extractLastKDigits(a, k) << b;
}