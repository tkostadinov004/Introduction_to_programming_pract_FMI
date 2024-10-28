#include <iostream>

int main()
{
	int number;
	do {
		std::cout << "Enter a number between 100 and 999: ";
		std::cin >> number;
	} while (number < 100);
	
	int counter = 0;
	//loop all numbers (amount)
	for (int i = 100; i < number; i++) {
		//loop all number one by one and calculate
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				counter++;
			}
		}
		if (counter > 2 || i == 1) {
			counter = 0;
		}
		else {
			counter = 0;
			int sum = 0;
			int currentNumber = i;
			while(currentNumber > 0){
				sum += currentNumber % 10;
				currentNumber /= 10;
			}
			if (sum <= 9) {
				std::cout << i << std::endl;
			}
		}
	}

}
