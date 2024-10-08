#include <iostream>

int main()
{
    int a;
    int b;
    
    std::cout << "Type 2 numbers" << '\n';

    std::cout << "" << '\n';

    std::cin >> a;
    std::cin >> b;

    std::cout << "" << '\n';

    std::cout << "Before: " << a << " " << b << '\n';

    int temp = a;
    a = b;
    b = temp;

    std::cout << "After: " << a << " " << b << '\n';
}