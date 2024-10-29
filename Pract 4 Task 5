#include <iostream>

int main() {
    int n, num, minNum, maxNum;
    double sum = 0.0;

    std::cin >> n;

    std::cin >> num;
    minNum = maxNum = num;
    sum += num;

    for (int i = 1; i < n; i++) {
        std::cin >> num;
        sum += num;
        if (num < minNum) minNum = num;
        if (num > maxNum) maxNum = num;
    }

    std::cout << "Min: " << minNum << std::endl;
    std::cout << "Max: " << maxNum << std::endl;
    std::cout << "Average: " << sum / n << std::endl;

}
