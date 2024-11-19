#include <iostream>
int F1(int a, int b) {
	for (int i = 2; i <= a; i++)
	{
		while (a % i == 0 && b % i == 0)
		{
			a /= i;
			b /= i;
		}	
	}
	return a;
}
int F2(int a, int b) {
	for (int i = 2; i <= a; i++)
	{
		while (a % i == 0 && b % i == 0)
		{
			a /= i;
			b /= i;
		}
	}
	return b;
}
int main()
{
	int a, b;
	std::cin >> a >> b;
	int a1 = F1(a, b);
	int b1 = F2(a, b);
	std::cout << a1 << "/" << b1;
} 
