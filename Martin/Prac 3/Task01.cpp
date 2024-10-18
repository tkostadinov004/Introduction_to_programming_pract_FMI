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
