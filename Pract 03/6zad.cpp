#include <iostream>

int main()
{
	int x, y, r;
	std::cin >> x >> y >> r;

	double distance;
	distance = std::sqrt(x * x + y * y);

	if (distance > r) {
		std::cout << "Outside the circle";
	}
	else if (distance == r) {
		std::cout << "On the circle";
	}
	else {
		std::cout << "Inside the circle";
	}
	return 0;
}