#include <iostream>
int main()
{
    double input = 0;
    int days = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    std::cout << "input amount of seconds: ";
    std::cin >> input;
    seconds = input;
    
    for (int i = 1; i <= input; i++) {
        if (i % 60 == 0) {
            minutes ++;
            if (minutes % 60 == 0) {
                hours ++;
                if (hours % 24 == 0) {
                    days ++;
                }
            }
        }
    }
    seconds = seconds - minutes * 60;
    minutes = minutes - hours * 60;
    hours = hours - days * 24;
    std::cout << days << " days "<< hours << " hours " << minutes << " minutes " << seconds << " seconds ";
}
