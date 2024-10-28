#include <iostream>

int main() {
    int n;
    std::cout << "vuvedete broq na chislata: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "invalid";
        
    } else {

        int number, min, max;
        double sum = 0;

        std::cout << "vuvedete chislo: ";
        std::cin >> number;

        min = max = number;
        sum += number;

        for (int i = 1; i < n; i++) {
            std::cout << "vuvedete chislo: ";
            std::cin >> number;

            if (number < min) {
                min = number;
            }
            if (number > max) {
                max = number;
            }

            sum += number;
        }

        double avg = sum / n;

        std::cout << "min = " << min << ", max = " << max << ", avg = " << avg;
    }
}
