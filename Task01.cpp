#include <iostream>

//255
void fact(int n)
{
	int del = 2;
	while (n != 1)
	{
		int count = 0;

		if (n % del == 0)
		{

			while (n % del == 0)
			{
				n = n / del;
				count++;
			}

			if (count > 0)
			{
				std::cout << del << " ^ " << count << " * ";
				count = 0;
			}
		}
		del++;
	}
}

int main()
{
	int num = 1;
	std::cin >> num;
	fact(num);
}