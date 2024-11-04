#include <iostream>

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int concatenateReversedWithOriginal(int n) {
    int reversed = reverseNumber(n);
    int multiplier = 1;

    while (multiplier <= n) {
        multiplier *= 10;
    }

    return reversed * multiplier + n;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int result = concatenateReversedWithOriginal(n);
    std::cout << "Result: " << result << std::endl;
}