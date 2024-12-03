#include <iostream>

bool isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum == n;
}

int main()
{
    int n;
    std::cin >> n;

    if (isPerfect(n))
    {
        std::cout << "chisloto e savursheno";
    }
    else
    {
        std::cout << "chisloto ne e savursheno";
    }
}
