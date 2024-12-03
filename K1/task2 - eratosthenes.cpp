#include <iostream>
void removeDivisors(bool sieve[], size_t size, int current)
{
	for (size_t i = current; i < size; i += current)
	{
		sieve[i] = true;
	}
}
void sieveDivisors(bool sieve[], size_t size)
{
	int current;
	std::cin >> current;
	while (current != 0)
	{
		removeDivisors(sieve, size, current);
		std::cin >> current;
	}
}
void print(const bool sieve[], size_t size)
{
	for (size_t i = 1; i < size; i++)
	{
		if (!sieve[i])
		{
			std::cout << i << " ";
		}
	}
}
int main()
{
	size_t size;
	std::cin >> size;

	constexpr size_t MAX_SIEVE_SIZE = 1024;
	bool sieve[MAX_SIEVE_SIZE]{ 0 };
	sieveDivisors(sieve, size);
	print(sieve, size);
}
