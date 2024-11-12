void PrintArray(int n, int arr[]) {
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}
void ReverseArray(int n, int arr[]) {
	for (int i = 0; i < n / 2; i++)
	{
		int a = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = a;
	}
}
bool IsNValid(int n) {
	return n <= 0 || n > 100;
}
void FillingTheArray(int n,int arr[]) {
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}
int main()
{
	int n;
	std::cin >> n;
	int arr[100];
	if (IsNValid(n))
	{
		std::cout << "Invalid length";
	}
	FillingTheArray(n, arr);
	ReverseArray(n, arr);
	PrintArray(n, arr);
}
