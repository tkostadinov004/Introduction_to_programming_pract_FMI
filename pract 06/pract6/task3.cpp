#include <iostream>
void reverseArray(int array[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cin >> array[i];
    }
    for (size_t i = 0; i < size / 2; i++) { // size = 4 i = 0 // size = 4 i=1
        int temp = array[i]; //temp = element 0 //temp = element 1
        array[i] = array[size - i - 1]; // element 0 = 4-0-1 = element 3 // element 1 = element 2
        array[size - i - 1] = temp; // element 3 = element 0 // element 2 = element 1
    }
    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
int main() {
    int n;
    std::cin >> n;
    int a[100];
    if (n <= 100) 
        reverseArray(a, n);
    else 
        std::cout << "Invalid length";
}