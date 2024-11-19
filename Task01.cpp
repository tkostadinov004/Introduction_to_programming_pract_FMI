#include <iostream>
int Gcd(int x, int y) {
	while (x!=y)
	{
		if (x>y)
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
int GcdOfFour(int a, int b, int c, int d) {
	return Gcd(Gcd(a, b), Gcd(c, d));
}
int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	int d1 = GcdOfFour(a, b, c, d);
	std::cout << d1;
}
