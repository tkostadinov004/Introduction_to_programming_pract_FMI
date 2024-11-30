int main()
{
    char op; // + - * /
    int num1;
    int num2;
    
    std::cin >> num1 >> num2 >> op;
    
    switch (op) {
        case '+':
        std::cout << num1 + num2;
        break;
        case '-':
        std::cout << num1 - num2;
        break;
        case '*':
        std::cout << num1 * num2;
        break;
        case '/':
        std::cout << num1 / num2;
        break;
    }
}
