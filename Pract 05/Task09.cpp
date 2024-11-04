#include <iostream>

long long sortDigitsDescending(int n) {
    long long sortedNumber = 0;
    int place = 1;

    for (int digit = 9; digit >= 0; digit--) {
        int count = 0;

        int temp = n;
        while (temp > 0) {
            if (temp % 10 == digit) {
                count++;
            }
            temp /= 10;
        }

        for (int i = 0; i < count; i++) {
            sortedNumber = sortedNumber * 10 + digit;
        }
    }

    return sortedNumber;
}

int main() {
    int n;
    std::cout << "vyvedete est chislo: ";
    std::cin >> n;

    long long sortedNumber = sortDigitsDescending(n);
    std::cout << "sortirano v namalqvasht red: " << sortedNumber;
}

//nali nqama problem s izpolzvaneto na long tui kato ne se e nalagolo do sega (do kolkoto si spomnqm) no ste go obqsnqvali