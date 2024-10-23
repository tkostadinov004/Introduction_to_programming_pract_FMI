#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (b > c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	std::cout << a << " " << b << " " << c;
}
