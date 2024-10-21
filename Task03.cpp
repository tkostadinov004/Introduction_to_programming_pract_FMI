#include <iostream>

int main()
{
	char symbol;
    std:: cin >> symbol;
	if (symbol == '0' ||
		symbol == '1' ||
		symbol == '4' || symbol == '5' ||
		symbol == '2' || symbol == '3' ||
		symbol == '7' || symbol == '8' || symbol == '9'
		|| symbol == '6')
	{
		std::cout << "digit";
	}
	else if (symbol == 'a' || symbol == 'b' ||
			symbol == 'c' || symbol == 'd' || symbol == 'e' || symbol == 'f'|| symbol == 'g' || symbol == 'h'||
			symbol == 'i' || symbol == 'j' || symbol == 'k' || symbol == 'l' || symbol == 'm' || symbol == 'n' ||
		     symbol == 'o' || symbol == 'p' || symbol == 'q' || symbol == 'r' || symbol == 's' || symbol == 't' ||
		     symbol == 'u' ||symbol == 'v' || symbol == 'w' || symbol == 'x' || symbol == 'y' || symbol == 'z')
	     {
	    std:: cout << "lowercase letter";
         }
	else if (symbol == 'A' || symbol == 'B' ||
		symbol == 'C' || symbol == 'D' || symbol == 'E' || symbol == 'F' || symbol == 'G' || symbol == 'H' ||
		symbol == 'I' || symbol == 'J' || symbol == 'K' || symbol == 'L' || symbol == 'M' || symbol == 'N' ||
		symbol == 'O' || symbol == 'P' || symbol == 'Q' || symbol == 'R' || symbol == 'S' || symbol == 'T' ||
		symbol == 'U' || symbol == 'V' || symbol == 'W' || symbol == 'X' || symbol == 'Y' || symbol == 'Z')
	     {
		     std::cout << "upperrcase letter";
	     }
	else
    {
        std:: cout  << "other";
    }
}
