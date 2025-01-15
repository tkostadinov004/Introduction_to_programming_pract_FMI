#include <iostream>

size_t getSubsetsCount(size_t setSize)
{
    return 1 << setSize;
}

bool isLower(char c)
{
    return c >= 'a' && c <= 'z';
}

size_t getCountOfLowercaseCharacters(const char* str)
{
    if (!str)
    {
        return 0;
    }

    size_t count = 0;
    while (*str)
    {
        if (isLower(*str))
        {
            count++;
        }
        str++;
    }
    return count;
}

unsigned myStrlen(const char* str)
{
    if (!str)
    {
        return 0;
    }

    unsigned count = 0;
    while (*str)
    {
        count++;
        str++;
    }
    return count;
}

char* getLowercaseCharacters(const char* str)
{
    if (!str)
    {
        return nullptr;
    }

    size_t lowercaseCount = getCountOfLowercaseCharacters(str);
    char* lowercase = new char[lowercaseCount + 1];
    lowercase[lowercaseCount] = '\0';

    int index = 0;
    while (*str)
    {
        if (isLower(*str))
        {
            lowercase[index++] = *str;
        }
        str++;
    }
    return lowercase;
}

void printSubset(size_t bitmask, const char* str)
{
    std::cout << "{ ";
    while (*str)
    {
        if ((bitmask & 1))
        {
            std::cout << *str << " ";
        }
        bitmask >>= 1;
        str++;
    }
    std::cout << " }" << std::endl;
}

void printLowercaseSubsets(const char* str)
{
    if (!str)
    {
        return;
    }

    char* lowercase = getLowercaseCharacters(str);
    size_t subsetsCount = getSubsetsCount(myStrlen(lowercase));

    for (size_t i = 0; i < subsetsCount; i++)
    {
        printSubset(i, lowercase);
    }

    delete[] lowercase; // !!!
}

int main()
{
    size_t strSize;
    std::cin >> strSize;

    char* str = new char[strSize + 1]; //'\0'!!!
    std::cin >> str;

    printLowercaseSubsets(str);
    delete[] str; // !!!
}