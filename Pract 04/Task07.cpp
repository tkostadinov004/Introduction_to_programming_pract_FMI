#include <iostream>

int main() {
    int n;
    std::cout << "vuvedete tricifreno chislo: ";
    std::cin >> n;

    if (n < 100 || n > 999) {
        std::cout << "invalid";

    }

    for (int i = 101; i <= n; i++) {
        bool isPrime = true;
        if (i < 2) {
            isPrime = false;
        }
        else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            int sumOfDigits = (i / 100) + (i / 10 % 10) + (i % 10);

            if (sumOfDigits < 10) {
                std::cout << i << " ";
            }
        }
    }
}
