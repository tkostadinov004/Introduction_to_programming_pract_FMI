#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    
    bool is_palindrome = (num % 10 == num / 1000) && (num % 100 / 10 == num / 100 % 10);
    
    std::cout << is_palindrome;
}
