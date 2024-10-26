#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int count = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a%i==0)
		{
			count++;
		}
	}
	if (count==2)
	{
		std::cout << "prime";
	}
	else
	{
		std::cout << "not prime";

	}
}
