#include <iostream>

int main() {
    int a, b, c, d, e;

    std::cin >> a >> b >> c >> d >> e;

    bool isTrion = true;

    if (!((a >= b) || (a <= b))) {
        isTrion = false;
    }

    if (!((b >= a && b >= c) || (b <= a && b <= c))) {
        isTrion = false;
    }

    if (!((c >= b && c >= d) || (c <= b && c <= d))) {
        isTrion = false;
    }

    if (!((d >= c && d >= e) || (d <= c && d <= e))) {
        isTrion = false;
    }

    if (!((e >= d) || (e <= d))) {
        isTrion = false;
    }

    if (isTrion) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }

    //moje i po tozi nachin
    /*if (a >= b || a <= b) {
        if (b >= a && b >= c || b <= a && b <= c) {
            if (c >= b && c >= d || c <= b && c <= d) {
                if (d >= c && d >= e || d <= c && d <= e) {
                    std::cout << "yes";
                } else {
                    std::cout << "no";
                }
            } else {
                std::cout << "no";
            }
        } else {
            std::cout << "no";
        }
    }*/

}
