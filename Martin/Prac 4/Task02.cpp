#include <iostream>

int main()
{
    int n = 0;
    int number = 0;
    int result = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
	    std::cin >> number;

        if (number % 2 == 0)
        {
            result = result * 10 + number;
        }
    }
    std::cout << result;
}
