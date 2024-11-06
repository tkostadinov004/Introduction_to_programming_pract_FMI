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

int countDigits(int num) {
    int counter = 0;
    while (num) {
        counter++;
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

void expandNum(int& res, int digit, int count) {
    for (int j = 0; j < count; j++) {
        res = res * 10 + digit;
    }
}

int sortNumDescOrd(int num) {
    int res = 0;  
    int digit_count = countDigits(num); 
    for (int i = 9; i >= 0; i--) { 
        int count_occuences = countOccurrences(num, i); 
        if (count_occuences > 0) {
            expandNum(res, i, count_occuences);
        }
    }

    return res;
}

int main() {
    int num, sorted;
    std::cin >> num;  
    sorted = sortNumDescOrd(num); 
    std::cout << sorted;  
}
