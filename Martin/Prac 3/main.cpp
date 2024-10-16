int main()
{
    int num;
    
    std::cin >> num;
    
    bool isEven = !(num % 2);
    
    if (isEven) {
        std::cout << "Even";
    }
    else std::cout << "Odd";
}

------------------------------------------------------------

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

------------------------------------------------------------

int main()
{
    char input;

    std::cin >> input;

    if (input >= '0' && input <= '9') {
        std::cout << "digit";
    }else if (input >= 'A' && input <= 'Z') {
        std::cout << "uppercase letter";
    }
    else if (input >= 'a' && input <= 'z') {
        std::cout << "lowercase letter";
    }
    else std::cout << "other";
}

------------------------------------------------------------

int main()
{
    int input;

    std::cin >> input;

    switch (input) {
    case 1: std::cout << 'I';break;
    case 2: std::cout << "II";break;
    case 3: std::cout << "III";break;
    case 4: std::cout << "IV";break;
    case 5: std::cout << 'V';break;
    case 6: std::cout << "VI";break;
    case 7: std::cout << "VII";break;
    case 8: std::cout << "VIII";break;
    case 9: std::cout << "IX";break;
    }
}

------------------------------------------------------------
