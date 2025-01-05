#include <iostream>

size_t getSubsetSize(unsigned characteristicVectorMask)
{
	size_t count = 0;
	while (characteristicVectorMask > 0)
	{
		if ((characteristicVectorMask & 1) == 1)
		{
			count++;
		}
		characteristicVectorMask >>= 1;
	}
	return count;
}
int* generateSubset(unsigned characteristicVectorMask, const int* arr, size_t size)
{
	if (!arr)
	{
		return nullptr;
	}

	size_t subsetSize = getSubsetSize(characteristicVectorMask);
	int* subset = new int[subsetSize + 1];
	subset[0] = subsetSize;
	int fillIndex = 1;

	for (size_t i = 0; i < size; i++)
	{
		if ((characteristicVectorMask & 1) == 1)
		{
			subset[fillIndex++] = arr[i];
		}
		characteristicVectorMask >>= 1;
	}
	return subset;
}
int** generateSubsets(const int* arr, size_t size, size_t& subsetsCount)
{
	if (!arr || size > 31)
	{
		return nullptr;
	}

	subsetsCount = 1 << size;
	int** subsets = new int* [subsetsCount];

	for (size_t i = 0; i < subsetsCount; i++)
	{
		subsets[i] = generateSubset(i, arr, size);
	}
	return subsets;
}
void printSubset(const int* subset)
{
	if (!subset)
	{
		return;
	}

	size_t size = subset[0];

	std::cout << "[ ";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << subset[i + 1] << " ";
	}
	std::cout << " ]" << std::endl;
}
void printSubsets(const int* const* subsets, size_t size)
{
	if (!subsets)
	{
		return;
	}

	for (size_t i = 0; i < size; i++)
	{
		printSubset(subsets[i]);
	}
}
void freeMemory(int** arr, size_t size)
{
	if (!arr)
	{
		return;
	}

	for (size_t i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}
int main()
{
	int arr[] = { 1,2,3 };
	constexpr size_t SIZE = 3;

	size_t subsetsCount = 0;
	int** subsets = generateSubsets(arr, SIZE, subsetsCount);

	printSubsets(subsets, subsetsCount);
	freeMemory(subsets, subsetsCount);
}
