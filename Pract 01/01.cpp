#include <iostream>

int main()
{
	//0
	std::cout << "Hello, FMI"
		<< std::endl << std::endl;

	//1
	double triangleA, triangleB, triangleC, semiparameter;
	std::cin >> triangleA >> triangleB >> triangleC;

	if (triangleA + triangleB <= triangleC
		|| triangleA + triangleC <= triangleB
		|| triangleB + triangleC <= triangleA)
	{
		throw std::invalid_argument("Invalid triangle");
	}

	semiparameter = (triangleA + triangleB + triangleC) / 2;

	std::cout << "Perimeter: " << 2 * semiparameter
		<< "\nArea: " << sqrt(semiparameter * (semiparameter - triangleA) * (semiparameter - triangleB) * (semiparameter - triangleC))
		<< std::endl << std::endl;

	//2
	double celsius;
	std::cin >> celsius;
	std::cout << "Kelvin: " << celsius + 273.15 << "\nFahrenheit: " << celsius * 9 / 5 + 32 << std::endl << std::endl;

	//3
	int a, b;
	std::cin >> a >> b;

	int temp = a;
	a = b;
	b = temp;

	std::cout << "a: " << a << ", b: " << b
		<< std::endl << std::endl;

	//4
	int totalSec, days, hours, minutes, seconds;
	std::cin >> totalSec;

	seconds = totalSec % 60;
	minutes = totalSec % (60 * 60) / 60;
	hours = (totalSec / (60 * 60)) % 24;
	days = (totalSec / (60 * 60)) / 24;

	std::cout << days << " days, "
		<< hours << " hours, "
		<< minutes << " minutes, "
		<< seconds << " seconds"
		<< std::endl << std::endl;

	//5
	int dividend, divisor;
	std::cin >> dividend >> divisor;

	if (divisor == 0)
	{
		throw std::invalid_argument("Cannot divide by zero");
	}

	std::cout << std::boolalpha << ((dividend % divisor) == 0)
		<< std::endl << std::endl;

	//6
	//6. Method 1
	std::string code;
	std::cin >> code;

	code.replace(0, 7, "*******");

	std::cout << code;

	/*
	6. Method 2
	unsigned long long code;
	std::cin >> code;

	std::cout << "*******" << code % 1000;
	*/

	std::cout << std::endl;
}


