#include <iostream>
bool checkRightSort(int n) {
	do {
		int temp = n % 10;
		int temp2 = (n / 10)%10;
		if (temp > temp2) {
			n /= 10;
		}
		else {
			return false;
		}
	} while (n > 10);
	return true;
}
bool checkReverseSort(int n) {
	do {
		int temp = n % 10;
		int temp2 = (n / 10) % 10;
		if (temp < temp2) {
			n /= 10;
		}
		else {
			return false;
		}
	} while (n > 10);
	return true;
}
int main()
{
	int n;
	std::cin >> n;
	std::cout << ((checkRightSort(n)||checkReverseSort(n))? "true" : "false");
}