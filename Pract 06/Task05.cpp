#include <iostream>

//check subarray
bool isPalindrome(int arr[], int start, int end) {
    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

//subarrays
bool checkEachPalindrome(int arr[], int currSize) {
    //try all combinations 
    for (int i = 1; i < currSize; i++) {
        //check if the left and right parts are palindromic
        //a palindrome can be a single number
        if (isPalindrome(arr, 0, i - 1) && isPalindrome(arr, i, currSize - 1)) {
            return true;
        }
    }
    return false;
}

int main() {
    const int SIZE = 256;
    int arr[SIZE];
    int currSize = 0;

    std::cout << "Enter number and then a non-numeric input: ";
    while (currSize < SIZE && std::cin >> arr[currSize]) {
        currSize++;
    }
    std::cout << std::boolalpha << checkEachPalindrome(arr, currSize);
}
