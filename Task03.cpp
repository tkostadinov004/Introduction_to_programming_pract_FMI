#include <iostream>

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int n;

    std::cin >> n;

    if (n <= 0 || n > 100)
    {
        std::cout << "Invalid length!";
        return 0;
    }

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) 
    {
        std::cout << arr[i] << " ";
    }
}
