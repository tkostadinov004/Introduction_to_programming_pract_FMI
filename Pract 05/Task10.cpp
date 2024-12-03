#include <iostream>

long long binaryExponentiation(int a, int n) {
    if (n == 0) {
        return 1;
    }

    long long half = binaryExponentiation(a, n / 2);

    if (n % 2 == 0) {
        return half * half;
    }
    else {
        return half * half * a;
    }
}

int main() {
    int a, n;
    std::cout << "vuvedete baza (a) i exp (n): ";
    std::cin >> a >> n;

    long long result = binaryExponentiation(a, n);
    std::cout << result;
}