#include <iostream>
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
void print(int n) {
    for (int i = 100; i <= n; i++) {
        if (isPrime(i) && digitSum(i) < 10) {
            std::cout << i << " ";
        }
    }
}
int main()
{
	int n;
	std::cin >>n;
    print(n);
}