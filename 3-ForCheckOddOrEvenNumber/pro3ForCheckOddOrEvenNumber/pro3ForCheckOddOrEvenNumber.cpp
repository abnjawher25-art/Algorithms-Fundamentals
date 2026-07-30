#include <iostream>
using namespace std;

//define enum type to check odd or even number
enum enCasesOfResult{Odd=1,Even=2};

//define a function to read number from user
short readNumber()
{
	//define a variable to store the number
    short number;

	//use do while loop to check the number is valid or not
    do {
        cout << "Enter a number: ";
        cin >> number;
        if (number < 1)
            cout << "error value!\n";
    } while (number < 1);

    //return the valid number
    return number;
}

//define a function to check odd or even number
enCasesOfResult checkNumber(short number)
{
	//check the number is odd or even
    if (number % 2 == 0)

		//return the result
        return enCasesOfResult::Even;
    else
        return enCasesOfResult::Odd;

}

//define a function to print the result
void printedResult(enCasesOfResult checkNumber)
{
	//print the result
    if (checkNumber == enCasesOfResult::Even)
        cout << "Even Number";
    else
        cout << "Odd Number";
}

//define the main function
int main()
{

	//call the function to read number from user and check the number is odd or even and print the result
    printedResult(checkNumber(readNumber()));

	//return 0 to indicate successful execution
    return 0;
}
