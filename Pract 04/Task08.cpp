#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int biggest = 0;
    int secondBiggest = 0;

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;

        if (num > biggest) {
            biggest = num;
        } else if (num > secondBiggest && num < biggest) {
            secondBiggest = num;
        }
    }

    std::cout << biggest << " ";
    std::cout << secondBiggest;
}