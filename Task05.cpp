#include <iostream>

bool isPalindrome(int arr[], int start, int end)
{
    while (start < end) 
    {
        if (arr[start] != arr[end]) 
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool isConcatenationOfTwoPalindromes(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++)
    {
        if (isPalindrome(arr, 0, i) && isPalindrome(arr, i + 1, n - 1)) 
        {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    
    std::cout << "Enter arr lenght: ";
    std::cin >> n;

    if (n <= 0 || n > 256)
    {
        std::cout << "Invalid length!";
        return 0;
    }

    int arr[256];
    std::cout << "Enter arr: ";

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    if (isConcatenationOfTwoPalindromes(arr, n)) 
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }
}