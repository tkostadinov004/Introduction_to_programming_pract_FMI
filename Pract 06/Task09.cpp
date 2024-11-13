#include <iostream>
int checkSingleNumber(int currElement, int arr[], int currSize, int i) {
    int counter = 0;
    for (int j = i; j < currSize; j++) {
        if (currElement > arr[j]) {
            counter++;
        }
    }
    return counter;
}
int countInversions(int arr[], int currSize, int count) {
    //4 3 2 1
    //check each element
    for (int i = 0; i < currSize; i++) {
        count += checkSingleNumber(arr[i], arr, currSize, i);
    }

    return count;
}


int main() {
    const unsigned int SIZE = 128;
    int arr[SIZE];
    int currSize = 0;

    std::cout << "Enter number and then a non-numeric input: ";
    while (currSize < SIZE && std::cin >> arr[currSize]) {
        currSize++;
    }

    //exclude negative
    int count = countInversions(arr, currSize, 0);
    std::cout << std::boolalpha << !count;
}
