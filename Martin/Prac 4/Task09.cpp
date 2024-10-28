#include <iostream>

int main()
{
    //Task9
    int n;
    std::cin >> n;

    double sqrtNum = 1;

    for (double i = 1; i < n / 2 + 1; i += 0.001)
    {
        if (i * i >= n) break;
    	sqrtNum += 0.001;
    }

    std::cout << sqrtNum - 0.001;
}
