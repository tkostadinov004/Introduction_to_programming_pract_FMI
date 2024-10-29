#include <iostream>

int main()
{
	int n;
	int highest_num = -2147483648;
	int lowest_num = 2147483647;
	double average_sum = 0;
	std::cin >> n;
  
	for (int i = 0; i < n; i++) {
		int num;
		std::cin >> num;
		average_sum += num;
		
		num > highest_num ? highest_num = num : highest_num;
		num < lowest_num ? lowest_num = num : lowest_num;
	}

	double average = average_sum / n;

	std::cout << "min = " << lowest_num << ", max = " << highest_num << ", avg = " << average;
}
