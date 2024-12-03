#include <iostream>

bool isPalindrome(int number) {
    int original = number;
    int reversed = 0;

    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    return original == reversed;
}

int main() {
    int n;
    std::cout << "Vuvedete chislo: ";
    std::cin >> n;

    if (isPalindrome(n)) {
        std::cout << "true" << std::endl;
    }
    else {
        std::cout << "false" << std::endl;
    }
}
