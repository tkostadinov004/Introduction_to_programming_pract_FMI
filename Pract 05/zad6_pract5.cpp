#include <iostream>

unsigned reverseNum(unsigned n)
{
    unsigned reversed = 0;

    while (n > 0) 
    {
        unsigned digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return reversed;
}

unsigned concatenateNumbers(unsigned n) 
{
    int reversed = reverseNum(n); 
    int digits = 1;

    int temp = n;
    while (temp > 0) 
    {
        digits++;
        temp /= 10;
    }

    unsigned multiplier = 1;

    for (unsigned i = 1; i < digits; i++) 
    {
        multiplier *= 10;
    }

    return reversed * multiplier + n;
}

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int result = concatenateNumbers(n);
    std::cout << result << std::endl;

    return 0;
}
