#include <iostream>

int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	bool isChainsaw = (a <= b && b >= c && c <= d && d >= e) || (a >= b && b <= c && c >= d && d <= e);
	std::cout << (isChainsaw ? "yes" : "no");
}