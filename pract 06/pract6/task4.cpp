#include <iostream>
bool palindromeCheck(int array[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cin >> array[i];
    }
    for (size_t i = 0; i < size / 2; i++) {
        int first = array[i];
        int last = array[size - i - 1];
        if (first != last) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    std::cin >> n;
    int a[512];
    if (n <= 512) 
        std::cout<<std::boolalpha<<palindromeCheck(a, n);
    else 
        std::cout << "Invalid length";
}