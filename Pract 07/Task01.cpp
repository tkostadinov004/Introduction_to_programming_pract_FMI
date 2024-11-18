#include <iostream>

int findNOD(unsigned int firstNumber, unsigned int secondNumber)
{
	while (firstNumber != secondNumber) 
	{
		if (firstNumber > secondNumber) 
		{
			firstNumber -= secondNumber;
		}
		else
		{
			secondNumber -= firstNumber;
		}
	}
	return firstNumber;
}

int main()
{

	unsigned int num1, num2, num3, num4;
	std::cin >> num1 >> num2 >> num3 >> num4;

	num1 = findNOD(num1, num2);
	num3 = findNOD(num3, num4);

	std::cout << findNOD(num1, num3);

}


