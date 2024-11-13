#include <iostream>
void printTruths(int a[], int i, size_t n, int k) {
    for (int j = 0; j < n; ++j) {
        if ((a[i] + a[j]) == k) {
            if (i != j) {
                std::cout << j << "\t" << i << "\n";
                a[i] = 0;
                a[j] = 0;
            }
        }
    }
}
void runNumbers(int a[], size_t n, int k) {
    for (int i = 0; i < n; ++i) {
        printTruths(a, i, n, k);
    }
    
}

int main() {
    int n;
    int k;
    std::cin >> n;
    std::cin >> k;
    int a[100];
    for(int i = 0; i< n; i++) std::cin >> a[i];
    if (n <= 100) {
        runNumbers(a, n, k);
    }
    else {
        std::cout << "Invalid length\n";
    }
    return 0;
}
