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
