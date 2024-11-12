#include <iostream>

int findClosestToAverage(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }

    double castedN = n;
    double average = sum / castedN;

    int closest = arr[0];
    double minDifference = (arr[0] > average) ? (arr[0] - average) : (average - arr[0]);

    for (int i = 1; i < n; i++)
    {
        double difference = (arr[i] > average) ? (arr[i] - average) : (average - arr[i]);
        if (difference < minDifference) 
        {
            minDifference = difference;
            closest = arr[i];
        }
    }

    return closest;
}

int main() 
{
    int n;

    std::cout << "enter lenght: ";
    std::cin >> n;

    if (n <= 0 || n > 128)
    {
        std::cout << "Invalid length!";
        return 0;
    }

    int arr[128];
    std::cout << "enter arrr: ";

    for (int i = 0; i < n; i++) 
    {
        std::cin >> arr[i];
    }

    int result = findClosestToAverage(arr, n);
    std::cout << result;
}