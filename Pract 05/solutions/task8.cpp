#include <iostream>
int removeHundredths(int a) {
	int b = 0;
	
	b += (a / 1000) * 100;
	b += (((a / 10) % 10)*10);
	b += a % 10;
	return b;
}
int main()
{
	int n, m;
	std::cin >> n >> m;
	for (int i = n; i < m; i++) {
		if (removeHundredths(i) % 11 == 0) {
			std::cout << i << " ";
		}
	}
}