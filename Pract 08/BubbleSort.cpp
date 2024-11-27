#include <iostream>

void naiveBubbleSort(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void optimizedBubbleSort(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		bool swapped = false;
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swapped = true;
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if (!swapped)
		{
			return;
		}
	}
}
int main()
{
	
}