#include <iostream>

int main()
{
	int day, month, year;
	std::cin >> day >> month >> year;

    if (month <= 2)
    {
        month += 12;
        year--;
    }

	int centuryYear = year % 100;
	int century = year / 100;
	int zellerDay = (day + ((13 * month + 13) / 5) + centuryYear + (centuryYear / 4) + (century / 4) - (2 * century)) % 7;

	int isoDay = (zellerDay + 5) % 7 + 1;

	switch (isoDay)
	{
        case 1:
            std::cout << "Monday";
            break;
        case 2:
            std::cout << "Tuesday";
            break;
        case 3:
            std::cout << "Wednesday";
            break;
        case 4:
            std::cout << "Thursday";
            break;
        case 5:
            std::cout << "Friday";
            break;
        case 6:
            std::cout << "Saturday";
            break;
        case 7:
            std::cout << "Sunday";
            break;
        default:
            std::cout << "Invalid day"; 
	}
}