#include <iostream>

int getStrLen(const char* str)
{
    if(!str)
    {
        return -1; // str is nullptr
    }

    int len = 0;

    while(*str)
    {
        len++;
        str++;
    }

    return len;
}

unsigned countSymbolOccurence(const char* str, char symbol)
{
    if (!str)
    {
        return 0;
    }
    
    int count = 0;
   
    while (*str)
    {
        if (*str == symbol)
        {
            count++;
        }

        str++;
    }

    return count;
}

bool canPermutateToPalindrome(const char* str)
{
    if (!str)
    {
        return false;
    }

    int len = getStrLen(str);

    char oddSymbol = 0;

    const char* temp = str;
    while (*temp)
    {
        unsigned countOfCurrentSymbol = countSymbolOccurence(str, *temp);

        if (countOfCurrentSymbol % 2 != 0)
        {
            if (len % 2 == 0)
            {
                return false;
            }

            if (!oddSymbol)
            {
                oddSymbol = *temp;
            }
            else if (*temp != oddSymbol)
            {
                return false;
            }
        }

        temp++;
    }

    return true;
}
int main()
{
    std::cout << canPermutateToPalindrome("hllooho");
}
