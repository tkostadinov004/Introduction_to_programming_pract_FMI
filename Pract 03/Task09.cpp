#include <iostream>

int main() {
    int day;
    int month;
    int year;

    std::cout << "vuvedete den mesec i godina: ";
    std::cin >> day >> month >> year;

    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }

    int a = year % 100;  //posl dve cifri na godinata
    int b = year / 100;  //purvite dwe

    int k = day + 13 * (month + 1) / 5 + a + a / 4 + b / 4 + 5 * b;
    int dayOfWeek = k % 7;

    switch (dayOfWeek) {
    case 0: std::cout << "Saturday"; break;
    case 1: std::cout << "Sunday"; break;
    case 2: std::cout << "Monday"; break;
    case 3: std::cout << "Tuesday"; break;
    case 4: std::cout << "Wednesday"; break;
    case 5: std::cout << "Thursday"; break;
    case 6: std::cout << "Friday"; break;
    }
}
