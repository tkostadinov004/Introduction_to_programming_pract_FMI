#include <iostream>

int main()
{
	int raw_seconds, days, hours, minutes, seconds;
	days = 0, hours = 0, minutes = 0, seconds = 0;
	std::cin >> raw_seconds;

	days += (raw_seconds / 86400);
	raw_seconds -= (86400 * days);
	hours += (raw_seconds / 3600);
	raw_seconds -= (3600 * hours);
	minutes += (raw_seconds / 60);
	raw_seconds -= (60 * minutes);
	seconds += raw_seconds;

	std::cout << days << " days, ";
	std::cout << hours << " hours, ";
	std::cout << minutes << " minutes, ";
	std::cout << seconds << " seconds";
}
