#include <iostream>

unsigned concatenate(unsigned a, unsigned b) {
    unsigned multiplier = 1;

    while (b >= multiplier) {
        multiplier *= 10; 
    }
    return a * multiplier + b;
}

int main() {
    unsigned num1, num2;

    std::cout << "First natural number:";
    std::cin >> num1;

    std::cout << "Second natural number: ";
    std::cin >> num2;

    unsigned result = concatenate(num1, num2);

    std::cout << "Concatenated result: " << result << std::endl;

    return 0;
}
