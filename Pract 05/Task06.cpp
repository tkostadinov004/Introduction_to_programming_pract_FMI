#include <iostream>

int reverseNum(int num) {
    int reversed_num, digit;
    reversed_num = 0;
    
    while (num) {
        digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    
    return reversed_num;
}

int reverseConcat(int num, int reversed_num) {
    int idx = 1;
    while (idx <= num) {
        reversed_num *= 10;
        idx *= 10;
    }
    
    return reversed_num + num;
}

int main() {
    int num, reverse;
    std::cin >> num;
    reverse = reverseNum(num);
    std::cout << reverseConcat(num, reverse);
}
