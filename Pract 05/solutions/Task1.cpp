#include <iostream>

bool isDigit(char c)
{
	return c >= '0' && c <= '9';
}
bool isUpper(char c)
{
	return c >= 'A' && c <= 'Z';
}
bool isLower(char c)
{
	return c >= 'a' && c <= 'z';
}
bool isAlpha(char c)
{
	return isUpper(c) || isLower(c);
}
bool isAlnum(char c)
{
	return isAlpha(c) || isDigit(c);
}
char capitalize(char c)
{
	if (!isLower(c))
	{
		return -1;
	}
	return c - 'a' + 'A';
}
char makeLower(char c)
{
	if (!isUpper(c))
	{
		return -1;
	}
	return c - 'A' + 'a';
}
int parseInt(char c)
{
	if (!isDigit(c))
	{
		return -1;
	}
	return c - '0';
}
char toChar(int n)
{
	if (n >= 0 && n <= 9)
	{
		return n + '0';
	}
	return 0;
}
int myLog(int number, int base)
{
	if (base < 2)
	{
		return -1;
	}

	int log = 0;
	while (number >= base)
	{
		number /= base;
		log++;
	}
	return log;
}
int myPow(int number, int power)
{
	int result = 1;
	for (size_t i = 0; i < power; i++)
	{
		result *= number;
	}
	return result;
}
int myCeil(double number)
{
	int wholePart = number;
	return number > wholePart ? wholePart + 1 : wholePart;
}
int myFloor(double number)
{
	int wholePart = number;
	return number < wholePart ? wholePart - 1 : wholePart;
}
int myAbs(int number)
{
	return number < 0 ? -number : number;
}

int main()
{
	
}