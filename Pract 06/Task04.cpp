#include <iostream>

bool isPalindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            return false;
        }
    }
    return true;
}
int main()
{
    std::cout << "Enter all the numbers you want, and then a non-numeric input";
    const unsigned int SIZE = 512;
    int arr[SIZE];
    int currSize = 0;
    while (currSize < SIZE && std::cin >> arr[currSize]) {
        currSize++;
    }
    std::cout << std::boolalpha << isPalindrome(arr, currSize);
}
