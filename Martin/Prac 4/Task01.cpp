#include <iostream>

int main()
{
    int n = 0;

    std::cin >> n;

    if (n <= 1)
    {
	    std::cout << "not prime";
    } else
    {
        int counter = 0;
	    for (int i = 2; i <= n; i++)
	    {
            if (n % i == 0)
            {
                counter++;
            }
	    }

        if (counter > 2)
        {
            std::cout << "not prime";
        } else
        {
	        std::cout << "prime";
        }
    }
}
