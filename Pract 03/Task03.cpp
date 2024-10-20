#include <iostream>

int main()
{
    char symbol;
    std::cin >> symbol;

    if ('`' < symbol && symbol < '{') {
        std::cout << "lowercase letter";
    }
    else if ('@' < symbol && symbol < '[') {
        std::cout << "uppercase letter";
    }
    else if ('/' < symbol && symbol < ':') {
        std::cout << "digit";
    }
    else {
        std::cout << "other";
    }
}
