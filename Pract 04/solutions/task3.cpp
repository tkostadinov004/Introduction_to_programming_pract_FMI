#include <iostream>
int main()
{   
    int n;
    std::cin >> n;
    int increment;
    int result;
    increment = 1;
    result = 0;
    while (n != 0)
    {
        if (n % 10 == 1) {
            result += increment;
            n = n - 1;
        }
        n = n / 10;
        increment *= 2;
    }
    std::cout << result;
    
}