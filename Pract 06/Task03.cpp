#include <iostream>
void enterArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}
int main()
{
    const unsigned int SIZE = 100;
    int n;
    std::cout << "Enter a number <= 100: ";
    std::cin >> n;
    int arr[SIZE];
    
    if (n <= 100) {
        enterArray(arr, n);
        for (int i = n - 1; i >= 0; i--) {
            std::cout << arr[i] << " ";
        }
    }
    else {
        std::cout << "Invalid length!";
    }
}

