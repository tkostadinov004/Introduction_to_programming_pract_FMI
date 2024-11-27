#include <iostream>

void printArray(int arr[][5], int rows, int columns)
{
	int value = 1;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = value;
			std::cout << arr[i][j] << "\t";
			value++;
		}
		std::cout << '\n';
	}
}

int main()
{
	int myArray[6][5];
	printArray(myArray, 6, 5	);
}
