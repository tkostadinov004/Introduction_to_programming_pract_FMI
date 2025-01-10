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
