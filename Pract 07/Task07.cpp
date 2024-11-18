#include <iostream>

int getCountOfDigit(int digit, unsigned long long number) 
{
	int countOfDigit = 0;

	while (number > 0) {
		if (number % 10 == digit) {
			countOfDigit++;
		}
		number /= 10;
	}

	return countOfDigit;
}

bool arePermutations(unsigned long long firstNum, unsigned long long secondNum)
{
	bool areNumbersPermutations = true;

	unsigned long long copyOfFirstNum = firstNum;

	while (copyOfFirstNum > 0) 
	{
		int digit = copyOfFirstNum % 10;

		if (getCountOfDigit(digit, firstNum) != getCountOfDigit(digit, secondNum))
		{
			areNumbersPermutations = false;
		}

		copyOfFirstNum /= 10;
	}

	return areNumbersPermutations;
}

int main() {
	unsigned long long firstNum, secondNum;
	std::cin >> firstNum >> secondNum;

	std::cout << std::boolalpha << arePermutations(firstNum, secondNum);
}




