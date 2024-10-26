
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int a = 0;
	int b = 1;
	int c;
	for (int i = 1; i <= n; i++)
	{
		if (i==1)
		{
			std::cout << b << " ";
		}
		else
		{
			c = a + b;
			a = b;
			b = c;
			std::cout << c << " ";
		}
	}
}
