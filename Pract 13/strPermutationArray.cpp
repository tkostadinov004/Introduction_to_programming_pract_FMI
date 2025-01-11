#include <iostream>

void fillOccurrencesArray(unsigned* occurrences, const char* str)
{
    if (!str || !occurrences)
    {
        return;
    }

    while (*str)
    {
        occurrences[*str - 'a']++;
        str++;
    }
}

size_t getOddOccurrencesCount(unsigned* occurrences, size_t size)
{
    if (!occurrences)
    {
        return 0;
    }

    size_t count = 0;

    for (int i = 0; i < size; i++)
    {
        if (occurrences[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}

bool canPermutateToPalindrome(const char* str)
{
    if (!str)
    {
        return false;
    }

    constexpr size_t ALPHABET_SIZE = 26;
    unsigned occurrences[ALPHABET_SIZE] = { 0 };

    fillOccurrencesArray(occurrences, str);
    size_t oddCount = getOddOccurrencesCount(occurances, ALPHABET_SIZE);

    return oddCount <= 1;
}

int main()
{
    std::cout << canPermutateToPalindrome("helloeehoo");
}
