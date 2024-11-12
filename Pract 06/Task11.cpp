#include <iostream>
void FillArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}
void PairsOfNums(int arr[], int n, int k) {
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == k && arr[i] != arr[j])
            {
                std::cout << arr[i] << " " << arr[j];
            }
        }
        std::cout << "\n";
    }
}
int main()
{
    int n,k;
    std::cin >> n >> k;
    int arr[100];
    FillArray(arr, n);
    PairsOfNums(arr, n, k);
}
