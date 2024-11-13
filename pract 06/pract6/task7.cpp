#include <iostream>

int removeNegatives(int a[], size_t n, int result[]) {
    int count = 0;
    for (size_t i = 0; i < n; i++) {
        if (a[i] > 0) {
            result[count] = a[i];
            count++;
        }
    }
    return count; 
}

int main() {
    int n;
    std::cin >> n;
    int a[128];
    for (size_t i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    if (n <= 128) {
        int result[128]; 
        int count = removeNegatives(a, n, result);
        std::cout << count << "\n";
        for (int i = 0; i < count; i++) {
            std::cout << result[i] << " ";
        }
        std::cout << "\n";
    }
    else {
        std::cout << "Invalid length\n";
    }
    return 0;
}
