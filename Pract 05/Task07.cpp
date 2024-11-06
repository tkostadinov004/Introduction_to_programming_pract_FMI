#include <iostream>

bool areDigitsSorted(int n) {
    int lastDigit = n % 10;
    n /= 10;

    bool ascending = true;
    if (n > 0 && lastDigit < n % 10) {
        ascending = false;
    }

    bool descending = true;
    if (n > 0 && lastDigit > n % 10) {
        descending = false;
    }

    while (n > 0) {
        int currentDigit = n % 10;
        if ((ascending && currentDigit > lastDigit) || (descending && currentDigit < lastDigit)) {
            return false;
        }
        lastDigit = currentDigit;
        n /= 10;
    }

    return true;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << (areDigitsSorted(n) ? "true" : "false");

}

