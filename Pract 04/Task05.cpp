#include <iostream>

int main() {
    int n;
    do {
        std::cout << "Enter a positive number: " << std::endl;
        std::cin >> n;
    } 
    while (n < 1);

    int number, minNumber, maxNumber;
    double sum = 0.0;
    std::cin >> number;
    minNumber = maxNumber = number;

    //add fisrt number
    sum += number;

    //rest of numbers
    for (int i = 1; i < n; ++i) {
        std::cin >> number;
        if (number < minNumber) {
            minNumber = number;
        }
        if (number > maxNumber) {
            maxNumber = number;
        }
        sum += number;
    }
    double avg = sum / n;
    std::cout << "min = " << minNumber << ", max = " << maxNumber << ", avg = " << avg;
}
