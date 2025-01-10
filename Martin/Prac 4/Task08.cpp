#include <iostream>

int main()
{
    int n;
    int inputNum;

    int biggest = 0;
    int secondBiggest = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
	    std::cin >> inputNum;

        if (inputNum > biggest)
        {
            secondBiggest = biggest;
            biggest = inputNum;
        }

        if (inputNum > secondBiggest && inputNum != biggest)
        {
            secondBiggest = inputNum;
        }
    }

    std::cout << biggest << " " << secondBiggest;
}
