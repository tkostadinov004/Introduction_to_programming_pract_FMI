#include <iostream>

int main()
{
    int n, k;

    std::cout << "vuvedete n i k: ";
    std::cin >> n >> k;

    int arr[100];
    std::cout << "vuvedete el: ";

    for (int i = 0; i < n; i++) 
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                std::cout << arr[i] << " " << arr[j] << std::endl;
            }
        }
    }
}
