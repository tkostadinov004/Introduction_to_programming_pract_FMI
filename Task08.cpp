
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int maxNum = INT_MIN;
	int secondMaxNum = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		if (a > maxNum)
		{
			secondMaxNum = maxNum;
			maxNum = a;
		}
		else if (a<maxNum && a>secondMaxNum)
		{
			secondMaxNum = a;
		}
	}
	std::cout << maxNum<<" "<< secondMaxNum;
}
