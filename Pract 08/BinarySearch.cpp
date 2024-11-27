#include <iostream>

int binarySearch(const int arr[], size_t size, int element)
{
	int start = 0, end = size - 1;
	while (start <= end)
	{
		int mid = end + (start - end) / 2;
		if (element == arr[mid])
		{
			return mid;
		}
		else if (element < arr[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return -1;
}
int main()
{
	
}