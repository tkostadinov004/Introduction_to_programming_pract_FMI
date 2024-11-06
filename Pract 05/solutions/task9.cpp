#include <iostream>
int sort(int a) {
    int sortedNumber = 0;
    for (int digit = 9; digit >= 0; digit--) {
        int temp = a;
        int count = 0;
        while (temp > 0) {
            if (temp % 10 == digit) {
                count++;
            }
            temp /= 10;
        }
        while (count > 0) {
            sortedNumber = sortedNumber * 10 + digit;
            count--;
        }
    }

    return sortedNumber;
}
int main()
{
	int a;
	std::cin >> a;
	std::cout << sort(a);
}