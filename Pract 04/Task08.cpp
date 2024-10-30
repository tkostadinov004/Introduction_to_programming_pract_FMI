#include <iostream>

int main() {
    int n, max1 = 0, max2 = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;

        if (num > max1) {
            max2 = max1;
            max1 = num;
        }
        else if (num > max2 && num < max1) {
            max2 = num;
        }
    }

    std::cout << "Largest: " << max1 << std::endl;
    std::cout << "Second Largest : " << max2 << std::endl;


}
