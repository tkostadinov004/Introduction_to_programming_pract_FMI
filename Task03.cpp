#include <iostream>

int main() {
    std::string binary;
    std::cin >> binary;

    int decimal = 0;

    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }

    std::cout << decimal << std::endl;
 
}
