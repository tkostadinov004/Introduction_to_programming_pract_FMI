#include <iostream>

int main() {
	int x, y, r;
	std::cin >> x >> y >> r;

	double distance = sqrt(x * x + y * y);

	if (distance == r) {
		std::cout << "On the circle" << std::endl;
	}
	else if (distance < r) {
		std::cout << "Inside the circle" << std::endl;
	}
	else {
		std::cout << "Outside the circle" << std::endl;
	}
}