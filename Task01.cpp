#include <iostream>
void Print(int multipliers[], int countOfMultipliers[], int count) {
	for (int i = 0; i < count; i++)
	{
		std::cout << multipliers[i];
		if (countOfMultipliers[i] > 1)
		{
			std::cout << "^" << countOfMultipliers[i];
		}
		if (i != count - 1)
		{
			std::cout << " * ";
		}
	}
}
int FindPrimeMultipliers(int n, int multipliers[], int countOfMultipliers[], int count) {
	while (n % 2 == 0)
	{
		multipliers[count] = 2;
		countOfMultipliers[count]++;
		n /= 2;
	}

	for (int i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			if (multipliers[count - 1] != i || count == 0)
			{
				multipliers[count] = i;
				countOfMultipliers[count] = 1;
				count++;
			}
			else
			{
				countOfMultipliers[count - 1]++;
			}
			n /= i;
		}
	}
	if (n > 2)
	{
		multipliers[count] = n;
		countOfMultipliers[count] = 1;
		count++;
	}
	return count;
}
void Factorization(int n)
{
	int multipliers[100]; 
	int countOfMultipliers[100];
	int count = 0;
	count = FindPrimeMultipliers(n, multipliers, countOfMultipliers, count);
	Print(multipliers, countOfMultipliers, count);

}

int main()
{
	int n;
	std::cin >> n;
	Factorization(n); 
}
