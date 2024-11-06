#include <iostream>

void printRes(int m, int n) {
    int digit;
    for (int i = m; i <= n; i++) {
        digit = i % 100;
        if ((i / 1000 * 100 + digit) % 11 == 0) {
            std::cout << i << ' ';
        }
    }
}

int main() {
    int m, n;
    std::cin >> m >> n;
    printRes(m, n);
}
