

#include <iostream>

int main()
{
	//std::cout << "Hello, FMI ";
	/*
	Theoritical questions:
	1. Output: 10
	2. Output: 14.5
	3. Output: 14.5
	Why? Since the expression is evaluated from left to right, it won't change.
	*/

	short sideA = 10;
	short sideB = 7;
	float sideC = 6.5;

	float perimeterOfTriangle = sideA + sideB + sideC;
	float semiPerimeter = perimeterOfTriangle / 2;

	float areaOfTriangle = sqrt(semiPerimeter * (semiPerimeter - sideA)
		* (semiPerimeter - sideB) * (semiPerimeter - sideC));

	std::cout << "The perimeter of the triangle is: " << perimeterOfTriangle << "\n";
	std::cout << "The area of the triangle is: " << areaOfTriangle;
}

