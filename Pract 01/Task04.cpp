#include <iostream>

int main() {
	int totalSeconds;
	std::cin >> totalSeconds;

	int days = totalSeconds / (24 * 3600);
	totalSeconds %= 24 * 3600;
	int hours = totalSeconds / 3600;
	totalSeconds %= 3600;
	int minutes = totalSeconds / 60;
	int seconds = totalSeconds % 60;

	std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";

}