#include <iostream>

int reverseNum(int num) {
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed;
}

bool isPalindrome(int num) {
    int reversed = reverseNum(num);
    return num == reversed;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << std::boolalpha << isPalindrome(num);
}
