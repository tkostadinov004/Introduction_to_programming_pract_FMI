#include <iostream>

int main() {
    int num;
    std::cin >> num;

    if (num >= 10 || num <= -10) {
        std::cout << num % 10 << std::endl;
    }
    else {
        std::cout << num << std::endl;
    }
}