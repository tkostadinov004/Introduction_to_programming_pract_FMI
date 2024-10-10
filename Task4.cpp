#include <iostream>
#include <cmath>

int main()
{
    int total_seconds;

    std::cout << "Type seconds ";
    std::cin >> total_seconds;

    int days = total_seconds / (24 * 3600);
    int remaning_seconds = total_seconds % (24 * 3600);
    int hours = remaning_seconds / 3600;
    remaning_seconds %= 3600;
    int minutes = remaning_seconds / 60;
    int seconds = remaning_seconds % 60;

    std::cout << "days - " << days << '\n'
        << "hours - " << hours << '\n'
        << "minutes - " << minutes << '\n'
        << "seconds - " << seconds << '\n';
}