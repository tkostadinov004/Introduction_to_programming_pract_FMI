#include <iostream>

int main()
{
	float sideA, sideB, sideC;
	std::cin >> sideA >> sideB >> sideC;

	float perimeter = sideA + sideB + sideC;
	float halfPerimeter = perimeter / 2;
	float area = sqrt(halfPerimeter * (halfPerimeter - sideA) * (halfPerimeter - sideB) * (halfPerimeter - sideC));

	std::cout << perimeter << " " << area;
}
