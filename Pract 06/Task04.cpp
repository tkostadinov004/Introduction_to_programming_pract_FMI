#include <iostream>

bool 

bool isPalindrom(int arr[], size_t size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[size - i - 1] != arr[i])
            return false;
    }

    return true;
}

int main()
{
    size_t size = 0;
    int arr[512];

    std::cin >> size;

    if (0 > size || size > 512)
    {
        std::cout << "invalid lenght";
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << isPalindrom(arr, size);

    return 0;
}