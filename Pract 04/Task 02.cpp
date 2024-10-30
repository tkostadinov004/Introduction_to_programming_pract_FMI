include <iostream>

int main() {
    int n, digit, result = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> digit;
        if (digit % 2 == 0)
            result = result * 10 + digit;
    }

    std::cout << result << std::endl;
