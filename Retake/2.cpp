#include <iostream>

// This is a more general approach that takes a function pointer and executes it over every element of the array
// Sample usage: size_t count = countOnCondition(nums, numsCount, [](double num){return num > 0;});
size_t countOnCondition(const double* nums, size_t numsCount, bool(*condition)(double))
{
	size_t count = 0;
	for (size_t i = 0; i < numsCount; i++)
	{
		if (condition(nums[i]))
		{
			count++;
		}
	}
	return count;
}

size_t countPositives(const double* nums, size_t numsCount) 
{
	size_t count = 0;
	for (size_t i = 0; i < numsCount; i++)
	{
		if (nums[i] > 0)
		{
			count++;
		}
	}
	return count;
}

void swap(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

void sort(double* nums, size_t numsCount)
{
	for (size_t i = 0; i < numsCount; i++)
	{
		unsigned minIndex = i;
		for (size_t j = minIndex + 1; j < numsCount; j++)
		{
			if (nums[j] < nums[minIndex])
			{
				minIndex = j;
			}
		}
		swap(nums[i], nums[minIndex]);
	}
}

double** positivesOnlyMatrix(const double* nums, size_t numsCount, size_t& matrixDimensions) 
{
	if (!nums)
	{
		return nullptr;
	}

	matrixDimensions = countPositives(nums, numsCount);
	double** matrix = new double* [matrixDimensions];
	for (size_t i = 0; i < matrixDimensions; i++)
	{
		matrix[i] = new double[matrixDimensions];
		for (size_t j = 0; j < matrixDimensions; j++)
		{
			matrix[i][j] = 0;
		}
	}

	size_t currentRow = 0;
	size_t currentCol = matrixDimensions - 1;
	for (size_t i = 0; i < numsCount; i++)
	{
		if (nums[i] > 0) 
		{
			matrix[currentRow][currentCol] = nums[i];
			currentRow++;
			currentCol--;
		}
	}
	return matrix;
}

void printSquareMatrix(const double* const* matrix, size_t dimension) 
{
	for (size_t i = 0; i < dimension; i++)
	{
		for (size_t j = 0; j < dimension; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


void freeMemory(double** matrix, size_t dimension)
{
	for (size_t i = 0; i < dimension; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}

int main()
{
	size_t size;
	std::cin >> size;

	double* nums = new double[size];
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> nums[i];
	}
	sort(nums, size);

	size_t matrixDimension;
	double** matrix = positivesOnlyMatrix(nums, size, matrixDimension);
	printSquareMatrix(matrix, matrixDimension);

	delete[] nums; //!!!!
	freeMemory(matrix, matrixDimension); //!!!!
}