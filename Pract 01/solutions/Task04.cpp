#include <iostream>

int main()
{
	unsigned seconds;
	std::cin >> seconds;

	constexpr unsigned SECONDS_PER_MINUTE = 60;
	constexpr unsigned SECONDS_PER_HOUR = SECONDS_PER_MINUTE * 60;
	constexpr unsigned SECONDS_PER_DAY = SECONDS_PER_HOUR * 24;

	unsigned days = seconds / SECONDS_PER_DAY;
	seconds -= days * SECONDS_PER_DAY;

	unsigned hours = seconds / SECONDS_PER_HOUR;
	seconds -= hours * SECONDS_PER_HOUR;

	unsigned minutes = seconds / SECONDS_PER_MINUTE;
	seconds -= minutes * SECONDS_PER_MINUTE;

	std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
}
