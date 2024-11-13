#include <iostream>

int averaged(int a[], size_t n) {
    int avg = 0;
    for (size_t i = 0; i < n; i++) {
        avg += a[i];
    }
    avg /= n;
    int temp = 0;
    int num = a[0];
    for (size_t i = 0; i < n; i++) {
        temp = a[i];
        if (std::abs(avg - temp) < std::abs(avg - num)) {
            num = temp;  
        }
    }
    return num;
}

int main() {
    int n;
    std::cin >> n;
    int a[128];
    for (size_t i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    if (n <= 128)
        std::cout << averaged(a, n);
    else 
        std::cout << "Invalid length";
}