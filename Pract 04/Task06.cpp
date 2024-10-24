#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n <= 0) {
        std::cout << 0 << std::endl;
    } else {
        int first = 1, second = 1, next;

        if (n >= 1) {
            std::cout << first << " ";
        }
        if (n >= 2) {
            std::cout << second << " ";
        }

        for (int i = 3; i <= n; i++) {
            next = first + second;
            std::cout << next << " ";
            first = second;
            second = next;
        }
        std::cout << std::endl;
    }
}