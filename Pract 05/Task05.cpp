#include <iostream>

long long concatenatedNumbers(long num1, long num2) {

	int reversedNumber = 0;
	int countZeros = 0;

	while (num2 > 0) {

		if (num2 % 10 != 0) {

			reversedNumber *= 10;
			reversedNumber += num2 % 10;

		}
		else {
			countZeros++;
		}

		num2 /= 10;

	}

	long concatenatedNumber = num1;

	while (reversedNumber > 0) {

		concatenatedNumber *= 10;
		concatenatedNumber += reversedNumber % 10;

		reversedNumber /= 10;
	}

	while (countZeros > 0) {
		concatenatedNumber *= 10;
		countZeros--;
	}

	return concatenatedNumber;

}


int main()
{

	unsigned long num1, num2;

	std::cin >> num1 >> num2;

	std::cout << concatenatedNumbers(num1, num2);
}