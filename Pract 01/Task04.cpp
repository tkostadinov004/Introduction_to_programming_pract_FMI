

#include <iostream>

int main()
{
    int seconds;
    std::cout << "Enter amount of seconds: ";
    std::cin >> seconds;

    //find days
    int days = seconds / 3600 / 24;
    

    //substract the days from the seconds
    seconds = seconds - days * 3600 * 24;

    //now find the hours
    int hours = seconds / 3600;

    //substract hours from the seconds
    seconds = seconds - hours * 3600;

    //now find the minutes
    int minutes = seconds / 60;

    //now substract the minutes from the seconds and finally we have the seconds
    seconds = seconds - minutes * 60;

    std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
}

