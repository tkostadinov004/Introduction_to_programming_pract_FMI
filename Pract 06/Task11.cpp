#include <iostream>

void getAllPairsWithSum(int *arr, int sum, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((arr[i] + arr[j]) == sum)
            {
                std::cout << arr[i] << " " << arr[j] << std::endl;
            }
        }
    }
}

int main()
{
    size_t size = 0;
    int sum = 0;
    int arr[100];

    std::cin >> size;
    std::cin >> sum;

    if (0 > size || size > 256)
    {
        std::cout << "invalid lenght";
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    getAllPairsWithSum(arr, sum, size);

    return 0;
}