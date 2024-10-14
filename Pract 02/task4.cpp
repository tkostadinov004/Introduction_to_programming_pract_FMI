#include <iostream>
int main()
{
	double a, b, c, d;
	std::cin >> a >> b;
	std::cin >> c >> d;
	if (a < b) {
		if (c < d) {
			if ((c < a && a < d)||(c < b && b < d)) {
				std::cout << "1";
			}
			else {
				std::cout << "0";
			}
		}
		else
			std::cout << "misinputs";
	}
	else
		std::cout << "misinputs";
}