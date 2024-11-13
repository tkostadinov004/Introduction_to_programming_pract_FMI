#include <iostream>

int getNumberOfInversions(int *arr, size_t size)
{
    int inversions = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                inversions++;
            }
        }
    }

    return inversions;
}

bool isSortedAscending(int *arr, size_t size)
{
    return getNumberOfInversions(arr, size) == 0;
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

    std::cout << isSortedAscending(arr, size);

    return 0;
}