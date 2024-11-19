#include <iostream>
long long BinaryNum(int i) {
    long long binaryNum = 0;
    int power = 1;
	while (i>0)
	{
		binaryNum = binaryNum + (i % 2 * power);
		power *= 10;
		i /= 2;
	}
	return binaryNum;
}
bool IsOneEgualToZero(int i) {
	long long binaryNum = BinaryNum(i);
	int count0 = 0;
	int count1 = 0;
	while (binaryNum>0)
	{
		int digit = binaryNum % 10;
		if (digit==1)
		{
			count1++;
		}
		else if (digit==0)
		{
			count0++;
		}
		binaryNum /= 10;
	}
	if (count0==count1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void PrintBetween1AndN(int n) {
	for (int i = 1; i <= n; i++)
	{
		if (IsOneEgualToZero(i))
		{
			std::cout << i << " ";
		}
	}
}
int main()
{
	int n;
	std::cin >> n;
	PrintBetween1AndN(n);
}
