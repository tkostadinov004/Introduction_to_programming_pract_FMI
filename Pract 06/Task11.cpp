#include <iostream>

void buildArray(int arr[], int currSize) {
    for (int i = 0; i < currSize; i++) {
        std::cin >> arr[i];
    }
}
int findOrderedPair(int arr[], int currSize, int i, int sum) {
    int count = 0;
    for (int j = i; j < currSize; j++) {
        if (i + arr[j] == sum && i != arr[j]) {
            return j;
        }
    }
    return 0;
}
int main() {
    int n, k;
    std::cout << "Enter a number <= 100: ";
    std::cin >> n;
    std::cout << "Enter a desired sum: ";
    std::cin >> k;
    
    const unsigned int SIZE = 100;
    int arr[SIZE];
    

    buildArray(arr, n);
   
    for (int i = 0; i < n; i++) {
        int pair = findOrderedPair(arr, n, arr[i], k);
        if (findOrderedPair(arr, n, i, k)) {
            std::cout << i << " " << pair;
        }
        std::cout << std::endl;
    }
    
}
