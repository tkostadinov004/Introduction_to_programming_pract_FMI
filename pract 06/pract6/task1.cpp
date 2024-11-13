#include <iostream>

void primeFactorization(int n) {
    bool first = true; 
    int count = 0;
    while (n % 2 == 0) {
        n /= 2;
        count++;
    }
    if (count > 0) {
        if (!first) {
            std::cout << " * ";
        }
        std::cout << "2";
        if (count > 1) {
            std::cout << "^" << count;
        }
        first = false;
    }
    for (int i = 3; i <= n / i; i += 2) { 
        count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            if (!first) {
                std::cout << " * ";
            }
            std::cout << i;
            if (count > 1) {
                std::cout << "^" << count;
            }
            first = false;
        }
    }
    if (n > 2) {
        if (!first) {
            std::cout << " * ";
        }
        std::cout << n;
    }
    std::cout << std::endl;
}

int main() {
    int num;
    std::cin >> num;
    primeFactorization(num);
    return 0;
}
