#include <iostream>

int main() {
    double n;
    std::cin >> n;

    int min = 0;
    int max = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;

        min = num < min ? num : min;
        max = num > max ? num : max;
        sum += num;
    }

    double avg = sum / n;
    std::cout << "min = " << min << ", ";
    std::cout << "max = " << max << ", ";
    std::cout << "avg = " << avg;
}