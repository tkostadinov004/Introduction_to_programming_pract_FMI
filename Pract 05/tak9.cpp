#include <iostream>

int sortDigitsDescending(int n) {
    int digits[10] = { 0 };

    
    while (n > 0) {
        int digit = n % 10;
        digits[digit]++;
        n /= 10;
    }

    int sortedNumber = 0;
    for (int i = 9; i >= 0; --i) {
        while (digits[i] > 0) {
            sortedNumber = sortedNumber * 10 + i;
            digits[i]--;
        }
    }

    return sortedNumber;
}

int main() {
    int n;
    std::cout << "enter number: ";
    std::cin >> n;

    int sortedNumber = sortDigitsDescending(n);
    std::cout << "result: " << sortedNumber << std::endl;

    system("pause>0");
}
