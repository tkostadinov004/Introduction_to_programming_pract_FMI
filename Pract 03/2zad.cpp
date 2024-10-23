int main()
{
	double a, b;
	char opperation;
	std::cin >> a >> b >> opperation;

	double result;
	switch (opperation)
	{
	case'+':
		result = a + b;
		break;
	case'-':
		result = a - b;
		break;
	case'*':
		result = a * b;
		break;
	case'/':
		result = a / b;
		break;
	default:
		std::cout << "Invalid opperation";
		break;
	}
	std::cout << result;
	return 0;
}
