#include <iostream>

bool areDigitsSorted(int n) {
    bool ascending = true;
    bool descending = true;
    int lastDigit = n % 10;
    n /= 10;

    while (n > 0) {
        int currentDigit = n % 10;

        if (currentDigit > lastDigit) {
            ascending = false;
        }

        if (currentDigit < lastDigit) {
            descending = false;
        }

        lastDigit = currentDigit;
        n /= 10;
    }

    return ascending || descending;
}

int main() {
    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    if (areDigitsSorted(n)) {
        std::cout << "true" << std::endl;
    }
    else {
        std::cout << "false" << std::endl;
    }
}
