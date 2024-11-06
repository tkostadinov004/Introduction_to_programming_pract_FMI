#include <iostream>

int countOccurrences(int num, int digit) {
    int counter = 0;
    while (num) {
        if (num % 10 == digit) {
            counter++;
        }
        num /= 10;
    }

    return counter;
}

int modifyNum(int num, int digits, int expansion) {
    int digit = num;
    for (int i = 0; i < digits; i++) {
        num *= 10;
        num += digit;
    }

    return num;
}

int expandNum(int res, int digit, int count) {
    for (int i = 0; i < count; i++) {
        res = res * 10 + digit;
    }
    return res;
}

int sortNumDescOrd(int num) {
    int res = 0;
    for (int i = 9; i >= 0; i--) {
        int count_occuences = countOccurrences(num, i);
        if (count_occuences > 0) {
            res = expandNum(res, i, count_occuences);
        }
    }

    return res;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << sortNumDescOrd(num);
}
