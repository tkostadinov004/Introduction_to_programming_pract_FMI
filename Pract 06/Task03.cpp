#include <iostream>
void reverseArray(int arr[], int size, int reversedArr[]) {
    
    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - 1 - i];
    }
}

void enterArray(int arr[], int n, int reversedArr[])
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    reverseArray(arr, n, reversedArr);
}

int main()
{
    const unsigned int SIZE = 100;
    int n;
    std::cout << "Enter a number <= 100: ";
    std::cin >> n;
    int arr[SIZE];
    int reversedArr[SIZE];
    
    if (n <= 100) {
        enterArray(arr, n, reversedArr);
        for (int i = 0; i < n; i++) {
            std::cout << reversedArr[i] << " ";
        }
    }
    else {
        std::cout << "Invalid length!";
    }
}

