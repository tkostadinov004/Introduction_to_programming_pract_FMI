#include <iostream>

int main() {
    int n;
    std::cout << "vuvedete broq na chislata: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "chisloto trqbwa da e >= 2";
    }
    else {
        int num, max1 = -1, max2 = -1;

        for (int i = 0; i < n; i++) {
            std::cin >> num;

            if (num > max1) {
                max2 = max1;
                max1 = num;
            }
            else if (num > max2 && num < max1) {
                max2 = num;
            }
        }

        std::cout << max1 << " " << max2;
    }
}
