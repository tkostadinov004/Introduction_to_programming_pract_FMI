#include <iostream>

size_t getSubsetsCount(size_t setSize)
{
    return 1 << setSize;
}

bool isLower(char c)
{
    return c >= 'a' && c <= 'z';
}

void getLowercaseCharacters(const char* str, char* lowercase, size_t& size)
{
    if (!str || !lowercase)
    {
        return;
    }
    size = 0;

    while (*str)
    {
        if (isLower(*str))
        {
            lowercase[size++] = *str;
        }
        str++;
    }
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

    constexpr size_t MAX_LOWERCASE_CHARACTERS_COUNT = 31;

    char lowercase[MAX_LOWERCASE_CHARACTERS_COUNT];
    size_t lowercaseCount = 0;

    getLowercaseCharacters(str, lowercase, lowercaseCount);
    size_t subsetsCount = getSubsetsCount(lowercaseCount);

    for (size_t i = 0; i < subsetsCount; i++)
    {
        printSubset(i, lowercase);
    }
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