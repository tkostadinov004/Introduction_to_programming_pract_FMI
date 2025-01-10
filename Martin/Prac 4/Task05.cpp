#include <iostream>

int main()
{
    int n;
    int smallest = 0;
    int biggest = 0;
    double avg = 0;

    std::cin >> n;

    for (int i = 0; n > i; i++)
    {
        int num;
	    std::cin >> num;
        avg += num;
		if (smallest == 0 && biggest == 0){
            smallest = num;
            biggest = num;
        }
        else{
            if (num < smallest) smallest = num;
			if (num > biggest) biggest = num;
        }
    }
    avg /= n;

    std::cout << "min = " << smallest << ", ";
    std::cout << "max = " << biggest << ", ";
    std::cout << "avg = " << avg;
}
