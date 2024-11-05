#include <iostream>

int reverseAndConcat(int n) {
    int reversed = 0;
    int original = n;

    while (n > 0) {
        int lastDigit = n % 10; 
        reversed = reversed * 10 + lastDigit; 
        n /= 10;
    }

    int temp = original;
    int powerOfTen = 1;
    while (temp > 0) {
        temp /= 10;
        powerOfTen *= 10;
    }
    return reversed * powerOfTen + original;
}

int main() {
    int n;
    std::cout << "Enter a natural number: ";
    std::cin >> n;

    int result = reverseAndConcat(n);
    std::cout << "Result:" << result << std::endl;

    return 0;
}
