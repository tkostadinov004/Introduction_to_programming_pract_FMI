#include <iostream>

int validNumbers() {
    int n;
    std::cout << "Enter numbers: ";
    do {
        std::cin >> n;
    } while ((n < 1000 || n > 9999) );
    //returns one of the numbers it does not matter
    return n;
}

int removePartOfNumber(int num) {
    int digits = num % 100;
    num = (num - num % 1000) / 10 + digits;
    return num;
}

void checkInterval(int m, int n) {

    for (int num = m; num <= n; num++) {
        int duplicate = removePartOfNumber(num);

        if (duplicate % 11 == 0) {
            std::cout << num << " ";
        }
    }
}
int main()
{
    int m = validNumbers();
    int n = validNumbers();
    checkInterval(m, n);
}

