#include <iostream>
int NewLengthOfArray(int arr[], int length, int newLength) {
	for (int i = 0; i < length; i++)
	{
		if (arr[i] >= 0)
		{
			arr[newLength] = arr[i];
			newLength++;
		}
	}
	return newLength;
}
int main()
{
	int arr[128] = { 1,-3,6,0,2,-5 };
	int length = 6;
	int newLength = 0;
	newLength = NewLengthOfArray(arr, length, newLength);
	std::cout << newLength << "\n";
	for (int i = 0; i < newLength; i++)
	{
		std::cout << arr[i]<<" ";
	}
}
