#include <iostream>

int main() {
    char character;

    std::cin >> character;

    if (character >= 'a' && character <= 'z') {
        std::cout << "malka bukva" << std::endl;
    }
    else if (character >= 'A' && character <= 'Z') {
        std::cout << "glavna bukva" << std::endl;
    }
    else if (character >= '0' && character <= '9') {
        std::cout << "cifra" << std::endl;
    }
    else {
        std::cout << "drugo" << std::endl;
    }

}
