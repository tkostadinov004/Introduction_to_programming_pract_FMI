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
