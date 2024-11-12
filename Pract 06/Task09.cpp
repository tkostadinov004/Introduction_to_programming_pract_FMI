#include <iostream>
bool IsArrAscending(int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		for (int j = i; j < length; j++)
		{
			if (arr[i]>arr[j])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
    int arr[] = { 1,2,4,3 };
    int length = 4;
	if (IsArrAscending(arr, length))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}
