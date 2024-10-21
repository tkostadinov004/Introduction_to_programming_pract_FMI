#include <iostream>

int main() {
    int x;
    int y;
    int r;

    std::cout << "vuvedete koordinatite na tochkata (x, y) i radiusa na okrujnostta: ";
    std::cin >> x >> y >> r;

    int distanceSquared = x * x + y * y;
    int radiusSquared = r * r;

    if (distanceSquared < radiusSquared) {
        std::cout << "Inside the circle";
    }
    else if (distanceSquared == radiusSquared) {
        std::cout << "On the circle";
    }
    else {
        std::cout << "Outside the circle";
    }
}
