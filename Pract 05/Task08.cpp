#include <iostream>

void findSpecialNumbers(int m, int n) {
    for (int num = m; num <= n; ++num) {
        if (num >= 1000 && num <= 9999) {
            int thousands = num / 1000;
            int tensAndUnits = num % 100; 

            int newNum = thousands * 100 + tensAndUnits;

            if (newNum % 11 == 0) {
                std::cout << num << " ";
            }
        }
    }
}

int main() {
    int x, y;
    std::cin >> x >> y;
    findSpecialNumbers(x, y);
}
