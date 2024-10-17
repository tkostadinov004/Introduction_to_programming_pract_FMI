#include <iostream>

int main() {
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3) {
        int temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }

    std::cout << num1 << " " << num2 << " " << num3 << std::endl;
}