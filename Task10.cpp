#include <iostream>

void sortFunc(char arr[], int n) 
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

bool isPermutation(const char arr1[], const char arr2[], int n)
{
    char sortedArr1[256];
    char sortedArr2[256];

    for (int i = 0; i < n; i++)
    {
        sortedArr1[i] = arr1[i];
        sortedArr2[i] = arr2[i];
    }

    sortFunc(sortedArr1, n);
    sortFunc(sortedArr2, n);

    for (int i = 0; i < n; i++)
    {
        if (sortedArr1[i] != sortedArr2[i])
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    char arr1[256], arr2[256];

    std::cin >> arr1;
    std::cin >> arr2;

    int len1 = 0, len2 = 0;

    while (arr1[len1] != '\0')
    {
        len1++;
    }
    while (arr2[len2] != '\0')
    {
        len2++;
    }

    if (len1 != len2)
    {
        std::cout << "false";
        return 0;
    }

    if (isPermutation(arr1, arr2, len1))
    {
        std::cout << "true";
    }
    else 
    {
        std::cout << "false";
    }
}