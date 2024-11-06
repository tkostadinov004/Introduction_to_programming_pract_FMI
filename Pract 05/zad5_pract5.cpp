#include <iostream>

unsigned countDigits(unsigned n) 
{
    int digits = 0;
    do 
    {
        digits++;
        n /= 10;
    } while (n > 0);

    return digits;
}

unsigned concatenate(unsigned a, unsigned b) 
{
    int digits = countDigits(b); 
    int multiplier = 1;

    for (unsigned i = 0; i < digits; i++) 
    {
        multiplier *= 10;
    }

    return a * multiplier + b;
}

int main() 
{
    int  a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int result = concatenate(a, b);
    std::cout << "Concatenation result: " << result << std::endl;

    return 0;
}