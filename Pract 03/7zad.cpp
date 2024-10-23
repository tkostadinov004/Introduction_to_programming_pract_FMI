#include <iostream>

int main()
{
	int hour, min;
	std::cin >> hour >> min;

	if (hour < 0 || hour>23)
	{
		std::cout << "invalid input";
		return 1;
	}

	if (min >= 45 && min <= 59)
	{
		if (hour == 23)
		{
			hour = -1;
		}
		hour++;
		min = (min + 15) - 60;
	}
	else if (min >= 0 && min <= 45)
	{

		hour++;
		min += 15;
	}
	else
	{
		std::cout << "invalid input";
		return 1;
	}

	if (hour >= 0 && hour <= 9)
	{
		std::cout << '0' << hour << ' ';
	}
	else
	{
		std::cout << hour << ' ';
	}

	if (min >= 0 && min <= 9)
	{
		std::cout << '0' << min;
	}
	else
	{
		std::cout << min;
	}


	return 0;
}