#include <iostream>

int removeHundredsDigit(int num) {
    int thousands = num / 1000;
    int tensAndUnits = num % 100;
    return thousands * 100 + tensAndUnits;
}

void findNumbers(int m, int n) {
    for (int i = m; i <= n; ++i) {
        if (i >= 1000 && i <= 9999) { 
            int modifiedNumber = removeHundredsDigit(i);
            if (modifiedNumber % 11 == 0) {
                std::cout << i << " ";
            }
        }
    }
}

int main() {
    int m, n;
    std::cout << "enter m an n (m < n): ";
    std::cin >> m >> n;

    if (m < n) {
        findNumbers(m, n);
    }
    else {
        std::cout << "invalid" << std::endl;
    }
}