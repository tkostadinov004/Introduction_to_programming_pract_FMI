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
