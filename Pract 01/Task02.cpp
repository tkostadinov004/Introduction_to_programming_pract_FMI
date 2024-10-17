#include <iostream>

int main() {
	float C;
	std::cout << "Input celsius: ";
	std::cin >> C;

	float K = C + 273.15;
	std::cout << "Kelvin: " << K << std::endl;

	float F = C * (9.0/5.0) + 32;
	std::cout << "Fahrenheit: " << F;
}