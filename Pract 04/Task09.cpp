#include <iostream>

int main() {
    int n;
    std::cout << "vuvedete estestveno chislo: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "invalid";
    }
    else {

        double approx = n;
        double betterApprox = 0.0;
        double tolerance = 0.0001;

        while (true) {
            betterApprox = 0.5 * (approx + n / approx);
            if (approx - betterApprox < tolerance && betterApprox - approx < tolerance) {
                break;
            }
            approx = betterApprox;
        }

        int wholePart = 0;
        double tempApprox = approx;

        while (tempApprox >= 1) {
            wholePart++;
            tempApprox -= 1;
        }

        int decimalPart = 0;
        tempApprox *= 1000;
        int count = 0;

        while (count < 3) {
            if (tempApprox >= 1) {
                decimalPart = decimalPart * 10 + int(tempApprox); //int() preobrazuva promenlivata ot double v tip int nadqvam se ne e problem che go izpolzvam prosto ne getvam kak inache da go napravq 
                tempApprox -= int(tempApprox);
            }
            else {
                decimalPart = decimalPart * 10;
            }
            count++;
            tempApprox *= 10;
        }

        std::cout << wholePart;

        if (decimalPart > 0) {
            std::cout << ".";

            if (decimalPart < 10) {
                std::cout << "00" << decimalPart;
            }
            else if (decimalPart < 100) {
                std::cout << "0" << decimalPart;
            }
            else {
                std::cout << decimalPart;
            }
        }
    }
}
