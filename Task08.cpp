#include <iostream>

int countInversions(int arr[], int n)
{
    int inversionCount = 0;

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                inversionCount++;
            }
        }
    }

    return inversionCount;
}

int main() 
{
    int n;

    std::cout << "vuvedete broq na el: ";
    std::cin >> n;

    if (n <= 0 || n > 256) 
    {
        std::cout << "Invalid length!";
        return 0;
    }

    int arr[256];
    std::cout << "vuvedete elementite: ";

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int result = countInversions(arr, n);
    std::cout << result;
}