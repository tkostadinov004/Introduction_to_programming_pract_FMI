#include <iostream>

int excludeNegative(int arr[], int currSize, int newArray[]) {
    //9 -1 2 -3 1
    int counter = 0;
    for (int i = 0; i < currSize; i++) {
        if (arr[i] >= 0) {
            newArray[i - counter] = arr[i];
        }
        else {
            counter++;
        }
    }
    return currSize - counter;
}

int main() {
    const unsigned int SIZE = 128;
    int arr[SIZE];
    //make a new arr, that is for sure <= the original
    int onlyPositiveArr[SIZE];
    int currSize = 0;

    std::cout << "Enter number and then a non-numeric input: ";
    while (currSize < SIZE && std::cin >> arr[currSize]) {
        currSize++;
    }
    //exclude negative
    int newSize = excludeNegative(arr, currSize, onlyPositiveArr);
    for (int i = 0; i < newSize; i++) {
        std::cout << onlyPositiveArr[i] << " ";
    }
    


}
