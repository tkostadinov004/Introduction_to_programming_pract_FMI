#include <iostream>

int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	if ((a >= b && b <= c && c >= d && d <= e) || (a <= b && b >= c && c <= d && d >= e)) {
		std::cout << "yes";
	}
	else {
		std::cout << "no";
	}
	return 0;

}