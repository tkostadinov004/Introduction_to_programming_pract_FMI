#include <iostream>
#include <cmath>

int main()
{

	//Задача 2
	double celsius;

	std::cout << "2. " << "Type temperature in Celsius: ";
	std::cin >> celsius;

	double kelvin = celsius + 273.15;
	double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

	std::cout << "     Temperature in Kelvin: " << kelvin << " K" << '\n';
	std::cout << "     Temperature in Fahrenheit: " << fahrenheit << " F" << '\n';
}