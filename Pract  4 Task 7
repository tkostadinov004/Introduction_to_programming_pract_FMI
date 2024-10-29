#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int counter = 0;
    for (int i = 101; i <= n; i++) {
        for (int k = 1; k <= i; k++)
        {
            if (i % k == 0)
            {
                counter++;
            }
        }

        if (counter == 2)
        {
            int sum = 0;
            int copy = i;
            int temp = 0;
            for (int j = 0; j < 3; j++)
            {
                temp = copy % 10;
                copy /= 10;
                sum += temp;
            }
            if (sum <= 9)
            {
                std::cout << i << " ";
            }
        }
        counter = 0;
    }
}
