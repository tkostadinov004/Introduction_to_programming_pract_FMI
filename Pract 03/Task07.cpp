

#include <iostream>

int main()
{
    short hour, minutes;
    std::cout << "Enter an hour and minutes: ";
    std::cin >> hour >> minutes;
   
    if (minutes >= 45) {
        minutes = minutes - 45;
        hour++;
        //only for 23 do:
        if (hour == 24) {
            hour = 0;
        }
    }
    else {
        minutes = minutes + 15;
    }

   
    if (hour >= 0 && hour <= 9) {
        if (minutes >= 0 && minutes <= 9) {
            std::cout << "0" << hour << " 0" << minutes;
        }
        else {
            std::cout << "0" << hour << " " << minutes;
        }  
    }
    else {
        if (minutes >= 0 && minutes <= 9) {
            std::cout << "0" << hour << " 0" << minutes;
        }
        else {
            std::cout << "0" << hour << " " << minutes;
        }
    }
}

