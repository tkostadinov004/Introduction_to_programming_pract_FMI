#include <iostream>

bool palindromeCheck(int a[], size_t start, size_t end) {
    while (start < end) {
        if (a[start] != a[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool isConcatenationOfTwoPalindromes(int a[], size_t n) {
    for (size_t i = 0; i < n - 1; i++) {
        if (palindromeCheck(a, 0, i) && palindromeCheck(a, i + 1, n - 1)) {
            return true;
        }
    }
    return false;
}
int main() {
    int n;
    std::cin >> n;
    int a[256];
    for (size_t i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    if (n <= 256) 
        std::cout<<std::boolalpha<<isConcatenationOfTwoPalindromes(a, n);
    else 
        std::cout << "Invalid length";
}