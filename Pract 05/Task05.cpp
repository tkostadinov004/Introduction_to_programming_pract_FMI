#include <iostream>

int concatenate(int a, int b) {
    int multiplier = 1;

    while (b / multiplier > 0) {
        multiplier *= 10;
    }

    return a * multiplier + b;
}

int main() {
    int num1, num2;
    std::cout << "vuvedete dwe chisla: ";
    std::cin >> num1 >> num2;

    int result = concatenate(num1, num2);
    std::cout << "konkatenirani: " << result << std::endl;
}