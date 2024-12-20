#include <iostream>

int getSmallest(int a, int b)
{
	if (a < b) return a;
	return b;
}

void simplify(int a, int b)
{
	int n = a;
	int m = b;

	for (int i = 2; i * i < getSmallest(a, b); i++)
	{
		if ( !(n % i) && !(m % i) )
		{
			n /= i;
			m /= i;
		}
	}


	std::cout << n << '/' << m;
}

int main()
{
	int n, m;

	std::cout << "Enter n: ";
	std::cin >> n;
	std::cout << "Enter m: ";
	std::cin >> m;

	simplify(n, m);
}
