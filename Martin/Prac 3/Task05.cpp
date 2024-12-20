int main()
{
    int n1, n2, n3, n4, n5;

    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

    if (n1 <= n2 && n2 >= n3 && n3 <= n4 && n4 >= n5) {
        std::cout << "yes";
    }
    else std::cout << "no";
}
