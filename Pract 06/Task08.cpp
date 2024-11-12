#include <iostream>
int CountOfInversions(int arr[], int length) {
	int countInversions = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = i; j < length; j++)
		{
			if (arr[i] > arr[j])
			{
				countInversions++;
			}
		}
	}
	return countInversions;
}
int main()
{
	int arr[256] = { 1,2,3,4 };
	int length = 4;
	std::cout << CountOfInversions(arr,length);
}
