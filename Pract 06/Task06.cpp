#include <iostream>

int findSumOfNumbers(int arr[], int currSize) {
    double sum = 0;
    for (int i = 0; i < currSize; i++) {
        //find the sum
        sum += arr[i];
    }
    return sum / currSize;
}
//1 2 3 4 20
int findClosestNumber(int sum, int arr[], int currSize) {
    double division = sum - arr[0];
    int closest = arr[0];
    for (int i = 1; i < currSize; i++) {
        if (sum - arr[i] < division && -(sum - arr[i]) < division) {
            closest = arr[i];
            division = sum - arr[i];
        }
    }
    return closest;
}
int main() {
    const int SIZE = 128;
    int arr[SIZE];
    int currSize = 0;

    std::cout << "Enter number and then a non-numeric input: ";
    while (currSize < SIZE && std::cin >> arr[currSize]) {
        currSize++;
    }
    //find sum
    int sum = findSumOfNumbers(arr, currSize);
    //find the closest
    int closestNumber = findClosestNumber(sum, arr, currSize);
    std::cout << closestNumber;
    
}
