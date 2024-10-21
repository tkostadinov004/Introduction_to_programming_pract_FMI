#include <iostream>

int main()
{
    char symbol;
    std::cin >> symbol;

    if ('a' <= symbol && symbol <= 'z') {
        std::cout << "lowercase letter";
    }
    else if ('A' <= symbol && symbol <= 'Z') {
        std::cout << "uppercase letter";
    }
    else if ('0' <= symbol && symbol <= '9') {
        std::cout << "digit";
    }
    else {
        std::cout << "other";
    }
}
