#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	int result = ((c >= a && c <= b) || (d >= a && d <= b));
	std::cout << result;
}
