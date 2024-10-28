#include <iostream>

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    //create a duplicate
    double duplNumber;
    //find the half of the original number
    double squareRootNum = n / 2.0;
    do {
        //make the duplicate number to be that variable
        duplNumber = squareRootNum;
        //so, basically here you need to:
        //1. divide the original number by the duplNumber
        // so for 5, the fisrt iteration goes: 5 / 2.5
        //2. then you divide by 2 so for the 1st iteration: 2 / 2
        //3. the add it to the duplicated number so: 2.5 + 1 = 3.5
        //4. and then check if we reached the sqrt number
        //if not, the while continues until reached 
        /*next iteration: 3.5 + (5 / 3.5) / 2 and we are 
        slowly getting to five, when we reach 5 we have found
        the sqrt of the number*/
        squareRootNum = (duplNumber + (n / duplNumber)) / 2;
    } 
    //this is the Heron's method
    while (duplNumber - squareRootNum != 0);

    std::cout << squareRootNum;

}

