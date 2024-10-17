#include <iostream>

int main() {
	int day, month, year;
	std::cin >> day >> month >> year;

    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }

    int K = year % 100;
    int J = year / 100;

    int h = (day + ((13 * (month + 1)) / 5) + K + K / 4 + J / 4 - 2 * J) % 7;

    switch (h) {
    case 0:
        std::cout << "Saturday" << std::endl;
        break;
    case 1:
        std::cout << "Sunday" << std::endl;
        break;
    case 2:
        std::cout << "Monday" << std::endl;
        break;
    case 3:
        std::cout << "Tuesday" << std::endl;
        break;
    case 4:
        std::cout << "Wednesday" << std::endl;
        break;
    case 5:
        std::cout << "Thursday" << std::endl;
        break;
    case 6:
        std::cout << "Friday" << std::endl;
        break;
    default:
        break;
    }
}