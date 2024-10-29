#include <iostream>

//You are given two two - dimensional vectors
//to check whether they are linearly dependent or independent

int main() {
	double x1, y1, x2, y2;
	
	std::cin >> x1 >> y1 >> x2 >> y2;

	bool areLinearyDipendanant = false;

	if ((x1 == 0 && x2 != 0) || (y1 == 0 && y2 != 0) ||
		((x2 == 0 && x1 != 0) || (y2 == 0 && y1 != 0)))
		areLinearyDipendanant = false;
	else
		areLinearyDipendanant = true;

	if (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0)
	{
		double lamda1 = x1 / x2;
		double lamda2 = y1 / y2;

		double epsilon = 0.001;

		areLinearyDipendanant = (std::fabs(lamda1 - lamda2) < epsilon);
	}

	if ((x1 == 0 && y1 == 0) || (x2 == 0 && y2 == 0))
		areLinearyDipendanant = true;

	std::cout << (areLinearyDipendanant ? "Lineary dipendant" : "Lineary indipendant");
}