#include <iostream>

bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int number) {
    return (number / 100) + (number / 10 % 10) + (number % 10);
}

int main() {
    int n;
    std::cout << "Vuvedete tricifreno chislo: ";
    std::cin >> n;

    if (n < 100 || n > 999) {
        std::cout << "Invalid" << std::endl;
    }

    for (int i = 101; i <= n; i++) {
        if (isPrime(i) && sumOfDigits(i) < 10) {
            std::cout << i << " ";
        }
    }
}
