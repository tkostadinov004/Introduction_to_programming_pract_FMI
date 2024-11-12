#include <iostream>

bool isPalindrome(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    std::cout << "lenght: ";
    std::cin >> n;

    if (n <= 0 || n > 512)
    {
        std::cout << "Invalid length!";
        return 0;
    }

    int arr[512];
    std::cout << "enter arr: ";

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    if (isPalindrome(arr, n))
    {
        std::cout << "true";
    }
    else 
    {
        std::cout << "false";
    }
}
