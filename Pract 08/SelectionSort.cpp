#include <iostream>

void selectionSort(int arr[], size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		int minIndex = i;
		for (size_t j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			int temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
	}
}
int main()
{
	
}