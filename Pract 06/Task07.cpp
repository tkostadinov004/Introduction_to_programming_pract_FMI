#include <iostream>

void removeElementX(int *arr, int index, size_t size)
{
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int removeNegativeValues(int *arr, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            size--;
            removeElementX(arr, i, size);
            i--;
        }
    }

    return size;
}

int main()
{
    size_t size = 0;
    int arr[128];

    std::cin >> size;

    if (0 > size || size > 128)
    {
        std::cout << "invalid lenght";
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    size = removeNegativeValues(arr, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }

    return 0;
}