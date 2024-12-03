#include <iostream>

int main() {
    int hours, minutes;

    std::cout << "vuvedete chasove i minuti (HH MM): ";
    std::cin >> hours >> minutes;

    minutes += 15;

    if (minutes >= 60) {
        minutes -= 60;
        hours += 1;
    }

    if (hours >= 24) {
        hours = 0;
    }

    if (hours < 10) {
        std::cout << "0";
    }
    std::cout << hours << ":";

    if (minutes < 10) {
        std::cout << "0";
    }
    std::cout << minutes;
}
