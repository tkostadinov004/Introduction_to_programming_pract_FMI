#include <iostream>

int powOfTen(int p)
{
	int power = 1;

	for (int i = 1; i <= p; i++)
	{
		power *= 10;
	}

	return power;
}

int getLength(int n)
{
	int count = 0;

	while (n != 0)
	{
		count++;
		n /= 10;
	}

	return count;
}

int getNumOnIndex(int n, int index)
{
	return n / powOfTen(getLength(n) - index) % 10;
}

int main()
{
	int m = 0, n = 0, k = 0;

	std::cout << "Enter m: ";
	std::cin >> m;
	std::cout << "Enter n: ";
	std::cin >> n;
	std::cout << "Enter k: ";
	std::cin >> k;

	const int mLength = getLength(m);
	const int nLength = getLength(n);

	int newM = 0;
	int newN = 0;

	for (int i = 1; i <= mLength; ++i)
	{
		const int numberWeTakeFrom = i == k ? n : m;
		newM += getNumOnIndex(numberWeTakeFrom, i) * powOfTen(mLength - i);
	}

	for (int j = 1; j <= nLength; ++j)
	{
		const int numberWeTakeFrom = j == k ? m : n;
		newN += getNumOnIndex(numberWeTakeFrom, j) * powOfTen(nLength - j);
	}

	std::cout << newM << " - " << newN;
}
