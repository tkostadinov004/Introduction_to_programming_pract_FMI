#include <iostream>

int main()
{
    //Task3
    int input = 0;
    int pow = 0;
    int result = 0;

    std::cin >> input;

    for (int i = 0; input; i++)
    {

        pow = input % 10;
        input /= 10;

        if (pow)
        {

            if (i == 0)

                result += 1;

            else
            {
                int add = 1;

                for (int j = 0; j < i; j++)
                {
                    add *= 2;
                }

                result += add;
            }
        }
    }
    std::cout << result;
}
