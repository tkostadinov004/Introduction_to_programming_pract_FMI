#include <iostream>
void FillingTheArray(int n, int arr[]) {
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}
bool IsPalindrom(int n, int arr[]) {
	for (int i = 0; i < n / 2; i++)
	{
		if (arr[i] != arr[n - i - 1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	std::cin >> n;
	int arr[512];
	FillingTheArray(n, arr);
	if (IsPalindrom(n, arr))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}
