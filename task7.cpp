#include <iostream>

bool isSortedAscending(int n) {
    int digit1 = n % 10;
    n /= 10;

    while (n > 0) {
        int digit2 = n % 10;
        if (digit2 > digit1) {
            return false;
        }
        digit1 = digit2;
        n /= 10;
    }
    return true;
}

bool isSortedDescending(int n) {
    int digit1 = n % 10;
    n /= 10;

    while (n > 0) {
        int digit2 = n % 10;
        if (digit2 < digit1) {
            return false;
        }
        digit1 = digit2;
        n /= 10;
    }
    return true;
}

bool areDigitsSorted(int n) {
    return isSortedAscending(n) || isSortedDescending(n);
}

int main() {
    int n;
    std::cout << "enter a  number > 0 : ";
    std::cin >> n;
    if (n > 0) {
        if (areDigitsSorted(n)) {
            std::cout << "The digits of the number are sorted." << std::endl;
        }
        else {
            std::cout << "The digits of the number are not sorted." << std::endl;
        }
    }
    else {
        std::cout << "error";
    }
    system("pause>0");
}
