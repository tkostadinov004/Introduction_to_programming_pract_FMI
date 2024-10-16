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

int main()
{
    int n1, n2, n3, n4, n5;

    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

    if (n1 <= n2 && n2 >= n3 && n3 <= n4 && n4 >= n5) {
        std::cout << "yes";
    }
    else std::cout << "no";
}

------------------------------------------------------------

int main()
{
    int a, b, r;

    std::cin >> a >> b >> r;

    int dist = sqrt(a * a + b * b);
    int diff = r - dist;

    if (diff > 0)
    {
        std::cout << "Inside the circle";
    }
    else if (diff == 0)
    {
	    std::cout << "On the circle";
    }
    else if (diff < 0)
    {
	    std::cout << "Outside the circle";
    }
}

------------------------------------------------------------

int main()
{
    int h, m;

    std::cin >> h >> m;

    m += 15;

    if (m >= 60)
    {
        m -= 60;
        ++h;
        if (h >= 24)
        {
            h = 00;
        }
    }

    if (h < 10 && m < 10)
    {
        std::cout << 0 << h << ' ' << 0 << m;
    }
    else if (h < 10)
    {
        std::cout << 0 << h << ' ' << m;
    }
    else if (m < 10)
    {
        std::cout << h << ' ' << 0 << m;
    }
    else
    {
        std::cout << h << ' '  << m;
    }
}

------------------------------------------------------------

int main()
{
    int n1, n2, n3, t;

    std::cin >> n1 >> n2 >> n3;

    if (n1 > n2)
    {
        t = n1;
        n1 = n2;
        n2 = t;
        t = 0;
    }
    if (n2 > n3)
    {
        t = n2;
        n2 = n3;
        n3 = t;
        t = 0;
    }
    if (n1 > n3)
    {
        t = n1;
        n1 = n3;
        n3 = t;
        t = 0;
    }
    std::cout << n1 << ' ' << n2 << ' ' << n3;
}
