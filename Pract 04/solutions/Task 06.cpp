#include <iostream>

int main()
{
	size_t count;
	std::cin >> count;
	if (count < 1)
	{
		std::cout << count;
	}
	unsigned prev = 0, curr = 1;
	for (size_t i = 1; i <= count; i++)
	{
		std::cout << curr << " ";
		unsigned next = prev + curr;
		prev = curr;
		curr = next;
	}
}