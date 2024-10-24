#include <iostream>

int main() {
    int lastNum;
    std::cin >> lastNum;

    for (int i = 101; i <= lastNum; i++) {
        int num = i;

        bool isPrime = false;
        for (int j = 2; j <= i; j++) {
            if (j != num && num % j == 0) {
                isPrime = false;
                break;
            } else {
                isPrime = true;
            }
        }
        if (isPrime) {
            int sumOfNum = 0;
            int tempNum = num;
            while (tempNum > 0) {
                sumOfNum += tempNum > 9 ? tempNum % 10 : tempNum;
                tempNum /= 10;
            }

            if (sumOfNum < 10) {
                std::cout << num << " ";
            }
        }
    }
}