#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		int a; 
		std::cin >> a;
		if (a%2==0)
		{
			std::cout << a;
			count++;
		}
	}
	if (count==0)
	{
		std::cout<<0;
	}
}
