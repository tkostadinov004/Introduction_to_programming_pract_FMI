#include <iostream>

int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0) 
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int findMaxDigitSum(int count)
{
    int maxSum = 0;
    int maxNumber = 0;

    for (int i = 0; i < count; ++i)
    {
        int num;
        std::cin >> num;

        int currentSum = sumOfDigits(num);
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            maxNumber = num;
        }
    }

    return maxNumber;
}

int main() 
{
    int n;
    std::cout << "vuvedete broq na chislata: ";
    std::cin >> n;

    std::cout << "vuvedete chislata: ";
    int result = findMaxDigitSum(n);

    std::cout << result;
}
