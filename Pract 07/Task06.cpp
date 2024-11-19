#include <iostream>

bool equalZerosAndOnes(int num) {
    int ones = 0, zeros = 0;
    int bits = 0;

    while (num > 0) {
        if (num % 2 == 1) {
            ones++;
        }
        else {
            zeros++;
        }
        num /= 2;
        bits++;
    }

    zeros = bits - ones;
    return ones == zeros;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (equalZerosAndOnes(i)) {
            std::cout << i << " ";
        }
    }

    return 0;
}
