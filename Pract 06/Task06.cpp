#include <iostream>
int AverageSum(int arr[], int length) {
	int averageSum = 0;
	for (int i = 0; i < length; i++)
	{
		averageSum += arr[i];

	}
	averageSum = averageSum / length;
	return averageSum;
}
int ClosestNum(int arr[], int length) {
	int averageSum = AverageSum(arr, length);
	int closestDifference = INT_MAX;
	int closestNumOfArr = 0;
	for (int i = 0; i < length; i++)
	{
		if (closestDifference > abs(averageSum - arr[i]))
		{
			closestDifference = abs(averageSum - arr[i]);
			closestNumOfArr = arr[i];
		}
	}
	return closestNumOfArr;
}
int main()
{
	int arr[128] = { 1,2,3,4,20 };
	int length = 5;
	std::cout<<ClosestNum(arr, length);
}
