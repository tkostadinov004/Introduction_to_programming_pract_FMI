#include <iostream>

void removeCharacterX(char *arr, int index, size_t size)
{
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

bool removeFirstOccurance(char *arr, char charecter, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == charecter)
        {
            removeCharacterX(arr, i, size - 1);
            return true;
        }
    }

    return false;
}

bool isPermutation(char *arr, char *arr2, size_t size)
{
    size_t size2 = size;

    for (int i = 0; i < size; i++)
    {
        if (removeFirstOccurance(arr2, arr[i], size2))
        {
            size2--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    size_t size = 0;
    char arr[256];
    char arr2[256];

    std::cin >> size;

    if (0 > size || size > 256)
    {
        std::cout << "invalid lenght";
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr2[i];
    }

    std::cout << isPermutation(arr, arr2, size);

    return 0;
}