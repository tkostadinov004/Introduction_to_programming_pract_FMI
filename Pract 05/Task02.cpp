#include <iostream>

bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; ++i) { 
        if (num % i == 0) return false; 
    }
    return true; 
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; 
        num /= 10; 
    }
    return sum;
}
bool isSingleDigit(int sum) {
    return sum >= 0 && sum < 10; 
}

int main() {
    int n;
    std::cout << "Enter a three-digit number (n): ";
    std::cin >> n;

    if (n < 100 || n > 999) {
        std::cout << " " << std::endl;
        return 1;
    }

    std::cout << " " << n << " " << std::endl;
    for (int i = 100; i <= n; ++i) {
        if (isPrime(i)) { 
            int sum = sumOfDigits(i); 
            if (isSingleDigit(sum)) { 
                std::cout << i << std::endl; 
            }
        }
    }

    return 0; 
}
