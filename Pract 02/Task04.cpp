#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	
	std::cout << ((b >= c) && (d >= a)) || ((c >= b) && (a >= d));
}
