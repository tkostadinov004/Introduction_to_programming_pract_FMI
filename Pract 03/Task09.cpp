

#include <iostream>

int main()
{
    //using Zeller's congruence:
    int day, month, year;
    std::cout << "Enter day, month and year: ";
    std::cin >> day >> month >> year;
    // adjust for January and February, because:
    // (3 = March, 4 = April, 5 = May, ..., 14 = February)
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    short dayOfWeek = (day + (13 * (month + 1)) / 5 
        + k + (k / 4) + (j / 4) - (2 * j)) % 7;

    switch (dayOfWeek) {
    case 0: 
        std::cout << "Saturday";
        break;
    case 1:
        std::cout << "Sunday";
        break;
    case 2:
        std::cout << "Monday";
        break;
    case 3:
        std::cout << "Tuesday";
        break;
    case 4:
        std::cout << "Wednesday";
        break;
    case 5:
        std::cout << "Thursday";
        break;
    case 6:
        std::cout << "Friday";
        break;
    default: std::cout << "Error"; 
        break;
    }

} 

