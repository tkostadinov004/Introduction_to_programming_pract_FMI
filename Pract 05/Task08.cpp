#include <iostream>

bool isDivisibleBy11(int num, int digit) {
    return (num / 1000 * 100 + digit) % 11 == 0;
}

void printRes(int m, int n) {
    int digit;
    for (int i = m; i <= n; i++) {
        digit = i % 100;
        if (isDivisibleBy11(i, digit)) {
            std::cout << i << ' ';
        }
    }
}

int main() {
    int m, n;
    std::cin >> m >> n;
    printRes(m, n);
}
