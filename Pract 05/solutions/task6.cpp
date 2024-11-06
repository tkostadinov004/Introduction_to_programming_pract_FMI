#include <iostream>
int concatenate(int n) {
    int reversed = 0;
    int temp = n;
    int multiplier = 1;
    while (temp > 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
        multiplier *= 10;
    }
    return reversed * multiplier + n;
}
int main()
{
	int n;
	std::cin >>n;
	std::cout << concatenate(n);
}