#include <iostream>

int removeNegativeElements(int arr[], int n)
{
    int newSize = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    return newSize;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) 
    {
        std::cout << arr[i] << " ";
    }
}

int main() 
{
    int n;

    std::cout << "vuvedete broq na elementite: ";
    std::cin >> n;

    if (n <= 0 || n > 128) 
    {
        std::cout << "Invalid length!";
        return 0;
    }

    int arr[128];
    std::cout << "vuvedete elementite: ";
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int newSize = removeNegativeElements(arr, n);

    std::cout << newSize << std::endl;

    printArray(arr, newSize);
}