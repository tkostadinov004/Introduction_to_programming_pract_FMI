#include <iostream>

int findCurrentSum(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
int main(){
    int n;
    std::cout << "Enter amount of numbers: ";
    std::cin >> n;
    int biggestSum = 0;
    int currentSum = 0;
    int sumWinner = 0;
    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;
        currentSum = findCurrentSum(number);
        if (currentSum > biggestSum) {
            biggestSum = currentSum;
            sumWinner = number;
        }
    }
    std::cout << sumWinner;
}
