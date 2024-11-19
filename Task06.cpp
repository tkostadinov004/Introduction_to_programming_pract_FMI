#include <iostream>

int countOnes(int num)
{
    int count = 0;
    while (num > 0) {
        if (num % 2 == 1)
        {
            ++count;
        }
        num /= 2;
    }
    return count;
}

int countZeros(int num)
{
    int count = 0;
    int bits = 0;
    int temp = num;
    while (temp > 0)
    {
        ++bits;
        temp /= 2;
    }
    return bits - countOnes(num);
}

int main() 
{
    int n;
    std::cout << "vuvedete chislo n: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        if (countOnes(i) == countZeros(i))
        {
            std::cout << i << " ";
        }
    }
}