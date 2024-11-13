#include <iostream>

void reverseArray(int *arr, size_t size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int num = arr[size - i - 1];
        arr[size - i - 1] = arr[i];
        arr[i] = num;
    }
}

int main()
{
    size_t size = 0;
    int arr[100];

    std::cin >> size;

    if (0 > size || size > 100)
    {
        std::cout << "invalid lenght";
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }

    return 0;
}