#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    if (n == 0 || n == 1)
    {
        std::cout << n;
    }
    else
    {
        int last = 1, current = 0, temp = 0;

        for (int i = 0; i < n; i++)
        {

            std::cout << last << " ";

            current = last + temp;
            temp = last;
            last = current;
        }
    }
}
