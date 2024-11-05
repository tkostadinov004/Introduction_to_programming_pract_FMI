#include <iostream>
int m, n;

int validNumbers() {
    do {
        std::cout << "Enter two positive numbers between 1000 and 9999, the fisrt is smaller: ";
        std::cin >> m >> n;
    } while ((n < 1000 || n > 9999) || (m < 1000 || m > 9999) || n <= m);
    //returns one of the numbers it does not matter
    return n;
}
void checkInterval(int m, int n) {
    for (int num = m; num < n; num++) {
        int duplicate = num;
        int digits = duplicate % 100;
        duplicate = (duplicate - duplicate % 1000) / 10;
        duplicate += digits;

        if (duplicate % 11 == 0) {
            std::cout << num << " ";
        }
    }
}
int main()
{
    validNumbers();
    checkInterval(m, n);
}

