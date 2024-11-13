#include <iostream>

int main()
{
    size_t size = 0;
    int arr[128];
    int sum = 0;

    std::cin >> size;

    if (0 > size || size > 128)
    {
        std::cout << "invalid lenght";
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
        sum += arr[i];
    }

    double averageSum = sum / (double)size;

    int currClosestIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if ((size_t)(averageSum - arr[currClosestIndex]) > (size_t)(averageSum - arr[i]))
        {
            currClosestIndex = i;
        }
    }

    std::cout << std::endl;
    std::cout << "closest number " << arr[currClosestIndex];

    return 0;
}