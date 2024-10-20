#include <iostream>

int main()
{
    int num;
    std::cin >> num;
  
    (num % 2 == 0) ? std::cout << "Even" : std::cout << "Odd";
}
