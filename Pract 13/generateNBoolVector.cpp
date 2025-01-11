#include <iostream>

unsigned getPowOfTwo(unsigned pow)
{
	return 1 << pow;
}

void fillGenerator(unsigned* generator, unsigned bucket, unsigned n)
{
	if (!generator)
	{
		return;
	}
	
	for (int i = 0; i < n; i++)
	{
		if (bucket % 2 == 0)
		{
			generator[n - i -1 ] = 0;
		}
		else
		{
			generator[n - i - 1] = 1;
		}

		bucket >>= 1;
	}
}

void printGenerator(unsigned* generator, unsigned n)
{
	if (!generator)
	{
		return;
	}
	
	for (int i = 0; i < n; i++)
	{
		std::cout << generator[i];
	}
}

void generateNthBoolVector(unsigned n)
{
	unsigned countOfVector = getPowOfTwo(n);
	unsigned* generator = new unsigned[n];

	for (int bucket = 0; bucket < countOfVector; bucket++)
	{
		fillGenerator(generator, bucket, n);
		printGenerator(generator, n);
		std::cout << std::endl;
	}

	delete[] generator;
}

int main()
{
	generateNthBoolVector(3);
}
