#include <iostream>


bool isDigit(char symbol) {
	return symbol >= '0' && symbol <= '9';
}

bool isUpper(char symbol) {
	return symbol >= 'A' && symbol <= 'Z';
}

bool isLower(char symbol) {
	return symbol >= 'a' && symbol <= 'z';
}

bool isAlpha(char symbol) {
	return isLower(symbol) || isUpper(symbol);
}

bool isAlnum(char symbol) {
	return isDigit(symbol) || isAlpha(symbol);
}

char capitalize(char symbol) {

	if (isLower(symbol)) {
		return symbol - 32;
	}

	return symbol;
}

char makeLower(char symbol) {

	if (isUpper(symbol)) {
		return symbol + 32;
	}

	return symbol;
}

int parseInt(char symbol) {

	switch (symbol) {

	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	}

	return -1;
}

char toChar(unsigned int number) {

	switch (number) {

	case 1:
		return '1';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';
	}

	return '\0';
}

double myPow(double number, int pow) {

	double result = 1;

	while (pow > 0) {

		result *= number;

		pow--;
	}

	return result;
}

double myAbs(double number) {

	if (number < 0) {

		return number * (-1);
	}

	return number;
}

int myCeil(double number) {

	int num = number;

	return num + 1;

}

int myFloor(double number) {

	int num = number;

	return num;

}

double myLog(double base, double number) {

	if (base < 0 || number < 0) {
		return -1;
	}

	double result = 1;
	double countPow = 0;

	while (result != number) {

		result *= base;
		countPow++;

	}

	return countPow;
}


int main()
{

}
