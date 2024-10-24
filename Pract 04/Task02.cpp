#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int multiplier = 1;
    int result = 0;
    int result_len = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        if (num % 2 == 0)
        {
            result += num * multiplier;
            multiplier *= 10;
            result_len++;
        }
    }

    if (result == 0)
    {
        std::cout << 0;
    }
    else
    {
        for (int i = 0; i < result_len; i++)
        {
            if (result > 10)
            {
                std::cout << result_len % 10;
                result /= 10;
            }
            else
            {
                std::cout << result;
            }
        }
    }
}