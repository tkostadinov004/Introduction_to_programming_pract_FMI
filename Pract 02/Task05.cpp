
#include <iostream>


    int main() 
    
    {

        int n;
        std::cin >> n;

        bool is_palindrome = (n / 1000 == n % 10) && ((n / 100) % 10 == (n / 10) % 10);
        std::cout << (is_palindrome ? " Тrue" : " False") << std::endl;

    }


