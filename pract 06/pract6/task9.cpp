#include <iostream>
bool isSorted = true;
int avoidNestingLoops(int a[], size_t n, size_t i) {
    int count = 0;
    for (size_t j = i + 1; j < n; j++) {
        if (a[j] < a[i]) {
            count++;
            isSorted = false;
        }
    }
    return count;
}

int checkInversion(int a[], size_t n) {
    int totalInversions = 0;
    for (size_t i = 0; i < n; i++) {
        totalInversions += avoidNestingLoops(a, n, i);
    }
    return totalInversions;
}

int main() {
    int n;
    std::cin >> n;
    int a[256];
    for (size_t i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    if (n <= 256) {
        int count = checkInversion(a, n);
        /*std::cout << count << "\n";
        std::cout << "\n";*/
        std::cout << std::boolalpha << isSorted;
    }
    else {
        std::cout << "Invalid length\n";
    }
    return 0;
}
