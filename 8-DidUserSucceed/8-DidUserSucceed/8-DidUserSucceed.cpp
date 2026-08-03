#include <iostream>
using namespace std;

//define enum for possible case
enum enPossibleCase { Pass = 1, Fail = 0 };

//function to read gread from user
short readGread()
{
	//define variable to store gread
	short Gread;

	//loop to read gread from user until it is valid
	do {
		cout << "Enter the gread: ";
		cin >> Gread;

		if (Gread > 100 || Gread < 0) {
			cout << "error! try again\n";
			cout << "_____________________\n";
		}
	} while (Gread > 100 || Gread < 0);

	//return the gread
	return Gread;
}

//function to check if gread is pass or fail
enPossibleCase checkGread(short Gread)
{
	if (Gread >= 50)
		return enPossibleCase::Pass;
	else
		return enPossibleCase::Fail;
}

//function to print the final result
void printFinalResult(short Gread)
{
	if (checkGread(Gread) == enPossibleCase::Pass)
		cout << "Pass!\n";
	else
		cout << "Fail!\n";
}

//main function
int main()
{
	//call the function to read gread from user and print the final result
	printFinalResult(readGread());

	//wait for user to press any key to exit
	system("pause");
	return 0;
}

