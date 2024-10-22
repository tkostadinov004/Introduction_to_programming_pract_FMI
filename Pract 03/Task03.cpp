
#include <iostream>

int main()
{
    char character;
    std::cout << "Enter any character: ";
    std::cin >> character;
    //I will use the ASCII values https://www.asciitable.com
    if (character >= 'a' && character <= 'z') {
        std::cout << "lowercase letter";
    }
    else if (character >= 'A' && character <= 'Z') {
        std::cout << "uppercase letter";
    }
    else if (character >= '0' && character <= '9') {
        std::cout << "digit";
    }
    else {
        std::cout << "other";
    }
}

