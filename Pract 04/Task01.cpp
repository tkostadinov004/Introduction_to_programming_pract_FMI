#include <iostream>

int main()
{
    int a;

    bool isPrime = true;

    std::cin >> a;

    if (a <= 1) {
        isPrime = false;
    }

    for (int i = 2; i * i < a; i++) {
        if (a % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        std::cout << "prime";
    }
    else {
        std::cout << "not prime";
    }
}