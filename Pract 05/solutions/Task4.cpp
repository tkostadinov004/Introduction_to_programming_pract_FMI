#include <iostream>

unsigned reverseNum(unsigned num)
{
	unsigned result = 0;
	while (num > 0)
	{
		(result *= 10) += num % 10;
		num /= 10;
	}
	return result;
}
bool isPalindrome(unsigned num)
{
	return reverseNum(num) == num;
}
int main()
{
	
}