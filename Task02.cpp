#include <iostream>
int Gcd(int x, int y) {
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}
int Lcm(int x, int y) {
	return x * y / Gcd(x, y);
}
int LcmOfFour(int a, int b, int c, int d) {
	return Lcm(Lcm(a, b), Lcm(c, d));
}
int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	int k = LcmOfFour(a, b, c, d);
	std::cout << k;
}
