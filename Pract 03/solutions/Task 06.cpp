#include <iostream>

int main()
{
	int pointX, pointY, radius;
	std::cin >> pointX >> pointY >> radius;

	constexpr int ORIGIN_X = 0;
	constexpr int ORIGIN_Y = 0;

	int distanceSq = (pointX - ORIGIN_X) * (pointX - ORIGIN_X) +
		(pointY - ORIGIN_Y) * (pointY - ORIGIN_Y);

	if (distanceSq < radius * radius)
	{
		std::cout << "Inside the circle";
	}
	else if (distanceSq == radius * radius)
	{
		std::cout << "On the circle";
	}
	else
	{
		std::cout << "Outside the circle";
	}
}