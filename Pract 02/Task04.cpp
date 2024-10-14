#include <iostream>
int main()
{

	int a, b, c, d;

	std::cin >> a >> b >> c >> d;

	bool areCrossing = (b >= c && b <= d) || (a >= c && a <= d);

	std::cout << areCrossing;
}