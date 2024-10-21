#include <iostream>

int main() {
    int a;
    int b;
    int c;

    std::cout << "vuvedete tri chisla: ";
    std::cin >> a >> b >> c;

    int first;
    int second;
    int third;

    if (a <= b && a <= c) {
        first = a;
        if (b <= c) {
            second = b;
            third = c;
        }
        else {
            second = c;
            third = b;
        }
    }
    else if (b <= a && b <= c) {
        first = b;
        if (a <= c) {
            second = a;
            third = c;
        }
        else {
            second = c;
            third = a;
        }
    }
    else {
        first = c;
        if (a <= b) {
            second = a;
            third = b;
        }
        else {
            second = b;
            third = a;
        }
    }

    std::cout << first << " " << second << " " << third;
}
