#include <iostream>

int main()
{
    int a, b, r;
    std::cin >> a >> b >> r;
    int length = sqrt(a * a + b * b);
    if (length > r)
    {
        std::cout << "Outside the circle";
    }
    else if (length < r)
    {
        std::cout << "Inside the circle";
    }
    else
    {
        std:: cout << "On the circle";
    }
}
