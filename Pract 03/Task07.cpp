#include <iostream>

int main() {
	const short PERIOD = 15;
	const short MAX_MINUTES = 60;
	const short MAX_HOURS = 24;


	short hours, minutes;
	std::cin >> hours >> minutes;

	short finalHours = hours;
	short finalMinutes = minutes;

	if (minutes + PERIOD >= MAX_MINUTES) {
		finalMinutes = minutes + PERIOD - MAX_MINUTES;
		if (hours + 1 >= MAX_HOURS) {
			finalHours = hours + 1 - MAX_HOURS;
		}
		else {
			finalHours++;
		}
	}
	else {
		finalMinutes += PERIOD;
	}

	if (finalHours < 10 && finalMinutes < 10) {
		std::cout << "0" << finalHours << " 0" << finalMinutes << std::endl;
	} 
	else if (finalHours < 10) {
		std::cout << "0" << finalHours << finalMinutes << std::endl;
	}
	else if (finalMinutes < 10) {
		std::cout << finalHours << " 0" << finalMinutes << std::endl;
	}
	else if (finalHours < 10 && finalMinutes < 10) {
		std::cout << "0" << finalHours << " 0" << finalMinutes << std::endl;
	}
	else {
		std::cout << finalHours << " " << finalMinutes << std::endl;
	}
}