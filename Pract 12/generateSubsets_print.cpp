#include <iostream>

void printSubset(unsigned characteristicVectorMask, const int* arr, size_t size)
{
	if (!arr)
	{
		return;
	}

	std::cout << "[ ";
	for (size_t i = 0; i < size; i++)
	{
		if ((characteristicVectorMask & 1) == 1)
		{
			std::cout << arr[i] << " ";
		}
		characteristicVectorMask >>= 1;
	}
	std::cout << " ]" << std::endl;
}
void generateSubsets(const int* arr, size_t size)
{
	if (!arr || size > 31)
	{
		return;
	}
	
	size_t subsetsCount = 1 << size;
	for (size_t i = 0; i < subsetsCount; i++)
	{
		printSubset(i, arr, size);
	}
}
int main()
{
	int arr[] = { 1,2,3 };
	constexpr size_t SIZE = 3;
	generateSubsets(arr, SIZE);
}
