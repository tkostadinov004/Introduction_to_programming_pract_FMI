#include <iostream>

void fillArray(int arr[][128], int rows, int columns)
{
	int value = 1;
	for (int i = 0; i < columns; ++i)
	{
		for (int j = 0; j < rows; ++j)
		{
			arr[j][i] = value;
			value++;
		}
	}
}

void printArray(int arr[][128], int rows, int columns)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			std::cout << arr[i][j] << '\t';
		}
		std::cout << '\n';
	}
}

int main()
{
	int myArray[128][128];
	fillArray(myArray, 5, 6);
	printArray(myArray, 5, 6);
}
