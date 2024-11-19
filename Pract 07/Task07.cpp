#include <iostream>

int countDigitOccurrences(int num, int digit) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == digit) {
            count++;
        }
        num /= 10;
    }
    return count;
}

bool isPermutation(int num1, int num2) {
    if (num1 == num2) {
        return true;
    }

    if (num1 == 0 || num2 == 0) {
        return false;
    }

    for (int i = 0; i < 10; i++) {
        int count1 = countDigitOccurrences(num1, i);
        int count2 = countDigitOccurrences(num2, i);

        if (count1 != count2) {
            return false;
        }
    }
    return true;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << std::boolalpha << isPermutation(num1, num2);
}
