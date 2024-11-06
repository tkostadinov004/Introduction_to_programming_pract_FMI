#include <iostream>

bool isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}

bool isUpper(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}

bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
}

bool isAlpha(char ch)
{
	return isUpper(ch) || isLower(ch);
}

bool isAlnum(char ch)
{
	return isAlpha(ch) || isDigit(ch);
}

char capitalize(char ch) 
{
    if (isLower(ch))
    {
        return ch - ('a' - 'A');
    }
    else
        return ch;
}

char makeLower(char ch) 
{
    if (isUpper(ch)) 
    {
        return ch + ('a' - 'A');
    }
    else
        return ch;
}

int parseInt(char ch)
{
    if (isDigit(ch))
    {
        return ch - '0';
    }
    else
        return -1;
}

char toChar(int n) 
{
    if (n >= 0 && n <= 9)
    {
        return n + '0';
    }else
        return '\0';
}

int myLog(int num, int base) 
{
    if (num <= 0 || base <= 1) 
    {
        return -1;

    }

    int result = 0;
    while (num >= base) 
    {
        num /= base;
        result++;
    }

    return result;
}

int myPow(int base, int pow) 
{
    int result = 1;

    for (int i = 0; i < pow; i++) 
    {
        result *= base;
    }
    return result;
}

int myAbs(int n) 
{
    if (n < 0) 
    {
        return -n;
    }
    else
        return n;
}


int main()
{
    std::cout << "isDigit('5'): " << (isDigit('5') ? "true" : "false") << std::endl;
    std::cout << "isDigit('a'): " << (isDigit('a') ? "true" : "false") << std::endl;

    std::cout << "isUpper('A'): " << (isUpper('A') ? "true" : "false") << std::endl;
    std::cout << "isUpper('a'): " << (isUpper('a') ? "true" : "false") << std::endl;

    std::cout << "isLower('a'): " << (isLower('a') ? "true" : "false") << std::endl;
    std::cout << "isLower('A'): " << (isLower('A') ? "true" : "false") << std::endl;

    std::cout << "isAlpha('A'): " << (isAlpha('A') ? "true" : "false") << std::endl;
    std::cout << "isAlpha('1'): " << (isAlpha('1') ? "true" : "false") << std::endl;

    std::cout << "isAlnum('A'): " << (isAlnum('A') ? "true" : "false") << std::endl;
    std::cout << "isAlnum('1'): " << (isAlnum('1') ? "true" : "false") << std::endl;
    std::cout << "isAlnum('!'): " << (isAlnum('!') ? "true" : "false") << std::endl;

    std::cout << "capitalize('a'): " << capitalize('a') << std::endl;
    std::cout << "capitalize('A'): " << capitalize('A') << std::endl;

    std::cout << "makeLower('A'): " << makeLower('A') << std::endl;
    std::cout << "makeLower('a'): " << makeLower('a') << std::endl;

    std::cout << "parseInt('5'): " << parseInt('5') << std::endl;
    std::cout << "parseInt('a'): " << parseInt('a') << std::endl;

    std::cout << "toChar(5): " << toChar(5) << std::endl;

    std::cout << "myLog(8, 2): " << myLog(8, 2) << std::endl;
    std::cout << "myLog(8, 1): " << myLog(8, 1) << std::endl;

    std::cout << "myPow(2, 3): " << myPow(2, 3) << std::endl;
    std::cout << "myPow(5, 0): " << myPow(5, 0) << std::endl;

    std::cout << "myAbs(-10): " << myAbs(-10) << std::endl;
    std::cout << "myAbs(10): " << myAbs(10) << std::endl;

}