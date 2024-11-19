#include <iostream>

int findGCDTwoNums(int n,int k) {

	if (n < k) {
		int temp = n;
		n = k;
		k = temp;
	}
	
	while (k != 0) {
		int mod = n % k;
		n = k;
		k = mod;
	}
	return n;
}


int findGCDFourNums(int x, int y, int z, int t) {
	int result = findGCDTwoNums(x, y);
	result = findGCDTwoNums(result, z);
	result = findGCDTwoNums(result, t);

	return result;
}

int main()
{
	int x, y, z, t;
	std::cin >> x >> y >> z >> t;
	std::cout << findGCDFourNums(x, y, z, t);
}
