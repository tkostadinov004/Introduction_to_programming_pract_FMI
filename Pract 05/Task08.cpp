#include <iostream>

void findFourDigitNumbers(int m, int n) {
    for (int i = m; i <= n; i++) {
        if (i >= 1000 && i <= 9999) {
            int hundredsDigit = (i / 100) % 10;
            int newNumber = (i / 1000) * 100 + (i % 100);

            if (newNumber % 11 == 0) {
                std::cout << i << std::endl;
            }
        }
    }
}
int main() {
    int m, n;
    std::cout << "Enter two natural numbers (m and n): ";
    std::cin >> m >> n;

    if (m >= n) {
        std::cout << "m < n." << std::endl;
        return 1;
    }

    findFourDigitNumbers(m, n);
    return 0;
}
