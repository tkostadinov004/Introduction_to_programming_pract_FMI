#include <iostream>

int main() {
    int n;
    std::cout << "vuvedete broq na chislata na fib: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "invalid";
    }

    int a = 0, b = 1, next;

    for (int i = 1; i <= n; i++) {
        next = a + b;
        std::cout << b << " ";

        a = b;
        b = next;
    }
}
