#include <iostream>
bool IsLengthsEqual(int aCopy, int bCopy) {
	int length1 = 0;
	int length2 = 0;

	while (aCopy > 0)
	{
		length1++;
		aCopy /= 10;
	}
	while (bCopy > 0)
	{
		length2++;
		bCopy /= 10;
	}
	if (length1==length2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool IsPermutation(int a, int b) {
	if (!IsLengthsEqual(a,b))
	{
		return false;
	}
	int count0_1 = 0;
	int count1_1 = 0;
	int count2_1 = 0;
	int count3_1 = 0;
	int count4_1 = 0;
	int count5_1 = 0;
	int count6_1 = 0;
	int count7_1 = 0;
	int count8_1 = 0;
	int count9_1 = 0;
	int count0_2 = 0;
	int count1_2 = 0;
	int count2_2 = 0;
	int count3_2 = 0;
	int count4_2 = 0;
	int count5_2 = 0;
	int count6_2 = 0;
	int count7_2 = 0;
	int count8_2 = 0;
	int count9_2 = 0;
	while (a > 0)
	{
		int digit = a % 10;
		if (digit == 0)
		{
			count0_1++;
		}
		else if (digit == 1)
		{
			count1_1++;
		}
		else if (digit == 2)
		{
			count2_1++;
		}
		else if (digit == 3)
		{
			count3_1++;
		}
		else if (digit == 4)
		{
			count4_1++;
		}
		else if (digit == 5)
		{
			count5_1++;
		}
		else if (digit == 6)
		{
			count6_1++;
		}
		else if (digit == 7)
		{
			count7_1++;
		}
		else if (digit == 8)
		{
			count8_1++;
		}
		else if (digit == 9)
		{
			count9_1++;
		}
		a /= 10;
	}
	while (b > 0)
	{
		int digit = b % 10;
		if (digit == 0)
		{
			count0_2++;
		}
		else if (digit == 1)
		{
			count1_2++;
		}
		else if (digit == 2)
		{
			count2_2++;
		}
		else if (digit == 3)
		{
			count3_2++;
		}
		else if (digit == 4)
		{
			count4_2++;
		}
		else if (digit == 5)
		{
			count5_2++;
		}
		else if (digit == 6)
		{
			count6_2++;
		}
		else if (digit == 7)
		{
			count7_2++;
		}
		else if (digit == 8)
		{
			count8_2++;
		}
		else if (digit == 9)
		{
			count9_2++;
		}
		b /= 10;
	}
	return count0_1 == count0_2 &&
		count1_1 == count1_2 &&
		count2_1 == count2_2 &&
		count3_1 == count3_2 &&
		count4_1 == count4_2 &&
		count5_1 == count5_2 &&
		count6_1 == count6_2 &&
		count7_1 == count7_2 &&
		count8_1 == count8_2 &&
		count9_1 == count9_2;
}
int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << std::boolalpha << (IsPermutation(a, b) ? "true" : "false");
}
