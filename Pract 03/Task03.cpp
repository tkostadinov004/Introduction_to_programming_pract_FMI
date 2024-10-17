#include <iostream>

int main() {
    char element;
    std::cin >> element;

    if (65 <= element && element <= 90) {
        std::cout << "uppercase letter" << std::endl;
    }
    else if (97 <= element && element <= 122) {
        std::cout << "lowercase letter" << std::endl;
    }
    else if(48 <= element && element <= 57) {
        std::cout << "digit" << std::endl;
    }
    else {
        std::cout << "other" << std::endl;
    }
}