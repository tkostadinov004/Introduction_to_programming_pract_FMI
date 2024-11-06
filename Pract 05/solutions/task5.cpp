#include <iostream>
int concatenate(int a, int b) {
    int temp = b;
    int digits = 0;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    int multiplier = 1;
    for (int i = 0; i < digits; i++) {
        multiplier *= 10;
    }
    return a * multiplier + b;
}
int main()
{
	int a,b;
	std::cin >>a;
    std::cin >> b;
	std::cout << concatenate(a,b);
}