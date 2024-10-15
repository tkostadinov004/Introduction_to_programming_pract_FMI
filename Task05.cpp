#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    int result = ((a % 10 == a / 1000) && ((a / 100) % 10 == (a / 10) % 10));
    std::cout << result;
}
