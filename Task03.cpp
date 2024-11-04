#include <iostream>
bool IsNumPerfect(int n) 
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	return sum == n;
}
int main()
{
	int n;
	std::cin >> n; 
	if (IsNumPerfect(n)) 
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}
