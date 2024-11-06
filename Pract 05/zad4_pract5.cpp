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
bool isPalindrome(unsigned n)
{
    return n == reverseNum(n);
}
int main()
{
    unsigned n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (isPalindrome(n)) 
    {
        std::cout << "True";
    }
    else 
    {
        std::cout << "False";
    }

    return 0;
}

