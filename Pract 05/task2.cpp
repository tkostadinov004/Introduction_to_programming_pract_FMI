// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>


bool isPerfect(int x){
	int sum = 0;
		for(int i = 1; i<=x / 2; i++)
			if (x % i == 0) {
				sum += i;
			}
		return sum == x;
		}
		int main(){
			int x;
			std::cout << "enetr number:";
			std::cin >> x;
			if (isPerfect(x)) {
				std::cout << x <<" is perfect";
			}
			else {
				std::cout << x << " is not perfect";
			}





		system("pause>0");
}