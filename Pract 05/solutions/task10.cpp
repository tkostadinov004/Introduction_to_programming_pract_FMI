#include <iostream>
long long powd(int a, int n) {
	
    long long result = 1;
    if (n == 0) {
        return result;
    }
    while (n > 0) {
        if (n % 2 == 1) {
            result *= a;
        }
        a *= a;
        n /= 2;
    }

    return result;
}
int main() {
	int a, n;
	std::cin >> a;
	std::cin >> n;	
	std::cout << powd(a, n);
}