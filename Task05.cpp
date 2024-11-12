bool IsPalindrom(int arr[], int start, int end) {
	for (int i = start; i < end; i++)
	{
		if (arr[start]!=arr[end])
		{
			return false;
		}
		start++;
		end--;
	}
	return true;
}
bool IsConacatenations(int arr[], int n) {
	for (int i = 0; i < n-1; i++)
	{
		if (IsPalindrom(arr,0,i) && IsPalindrom(arr,i+1,n-1))
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int arr[]={ 1,2,3 };
	int n = 3;	
	std::cout << (IsConacatenations(arr, n) ? "true" : "false");
}
