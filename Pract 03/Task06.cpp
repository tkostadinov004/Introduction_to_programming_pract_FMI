#include <iostream>
#include <cmath>

int main() {
    int x, y, r;
    std::cin >> x >> y >> r;
    
    int result = sqrt(x*x + y*y);
    
    if (result > r) {
        std::cout << "Outside the circle";
    }
    else if (result < r) { 
        std::cout << "Inside the circle";
    } 
    else {
        std::cout << "On the circle";
    }
}
