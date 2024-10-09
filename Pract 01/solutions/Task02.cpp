#include <iostream>

int main()
{
	float celsius;
	std::cin >> celsius;

	float kelvin = celsius + 273.15;
	float fahrenheit = (celsius * 9 / 5) + 32; //Parentheses are not needed here

	std::cout << "Kelvin: " << kelvin << std::endl;
	std::cout << "Fahrenheit: " << fahrenheit;
}
