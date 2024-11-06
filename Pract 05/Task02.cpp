#include <iostream>

bool isPrime(int num) {
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        int lastDigit = num % 10;
        sum += lastDigit;
        num /= 10;
    }

    return sum;
}

void searchedPrimes(int n) {
    for (int i = 100; i <= n; ++i) {
        if (isPrime(i) && sumOfDigits(i) < 10) {
            std::cout << i << " ";
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    searchedPrimes(n);
}
