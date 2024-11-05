#include <iostream>

bool isPalindorm(unsigned n)
{
	unsigned nCopy = n;
	unsigned reversedN = 0;

	while (nCopy > 0)
	{
		reversedN = reversedN * 10 + (nCopy % 10);
		nCopy /= 10;
	}

	return n == reversedN;
}
int main() {
    unsigned number;

    std::cout << "Enter number: ";
    std::cin >> number;

    if ("isPalindrom (number)") {
        std::cout << number << " True." << std::endl;
    }
    else {
        std::cout << number << " False." << std::endl;
    }

    return 0;
}
