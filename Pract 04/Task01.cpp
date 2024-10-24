#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    bool isPrime = false;
    for (int i = 2; i <= num; i++)
    {
        if (i != num && num % i == 0)
        {
            isPrime = false;
            break;
        }
        else
        {
            isPrime = true;
        }
    }
    isPrime ? std::cout << "Prime" : std::cout << "Not prime";
}