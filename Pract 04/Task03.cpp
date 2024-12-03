#include <iostream>

int main() {
    int binary, decimal = 0, base = 1, lastDigit;

    std::cout << "vuvedete dvoichno chislo: ";
    std::cin >> binary;

    while (binary > 0) {
        lastDigit = binary % 10;
        decimal += lastDigit * base;
        binary /= 10;
        base *= 2;
    }

    std::cout << decimal;
}