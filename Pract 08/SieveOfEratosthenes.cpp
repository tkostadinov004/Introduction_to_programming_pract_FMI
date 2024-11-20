#include <iostream>

void sieveOut(bool sieve[], unsigned upperBound, int current)
{
	for (size_t i = current + 1; i <= upperBound; i++)
	{
		if (i % current == 0) 
		{
			sieve[i] = true;
		}
	}
}
void eratosthenesSieve(unsigned upperBound)
{
	constexpr size_t MAX_SIEVE_SIZE = 1024;
	bool sieve[MAX_SIEVE_SIZE]{ false };
	for (size_t i = 2; i <= upperBound; i++)
	{
		if (!sieve[i])
		{
			std::cout << i << " ";
			sieveOut(sieve, upperBound, i);
		}
	}
}
int main()
{
	
}