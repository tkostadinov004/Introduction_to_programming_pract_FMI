#include <iostream>

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

char toLower(char c)
{
	if (isUpper(c))
	{
		return 'a' + (c - 'A');
	}
	return c;
}

size_t myStrLen(const char* str)
{
	if (!str)
	{
		return 0;
	}

	size_t count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

bool isPalindrome(const char* str, size_t left, size_t right)
{
	if (left == right)
	{
		return true;
	}
	if (!isAlpha(str[left]))
	{
		return isPalindrome(str, left + 1, right);
	}
	if (!isAlpha(str[right]))
	{
		return isPalindrome(str, left, right - 1);
	}

	if (toLower(str[left]) != toLower(str[right]))
	{
		return false;
	}

	return isPalindrome(str, left + 1, right - 1);
}

bool isPalindrome(const char* str)
{
	if (!str)
	{
		return false;
	}

	return isPalindrome(str, 0, myStrLen(str) - 1);
}

int main()
{
	std::cout << isPalindrome("Was it a car or a cat I saw?");
}