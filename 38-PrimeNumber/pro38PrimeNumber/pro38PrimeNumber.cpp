#include <iostream>
using namespace std;

//define enum for case number
enum enCaseNumber { Prime = 1, NoPrime = 0 };

//function to read number from user
long readNumber(string message)
{
    long enteredNumber;

    do {

        cout << message;
        cin >> enteredNumber;

    } while (enteredNumber <= 1);
   
    return enteredNumber;
}

//function to check if number is prime
bool isPrimeNumber(long enteredNumber)
{

    for (long i = 2; i * i <= enteredNumber; i += 2)
    {
        if (enteredNumber % i == 0)
            return false;
    }

    return true;
}

//function to check if number is prime and return enum value
enCaseNumber finalCheck(long enteredNumber)
{
    return isPrimeNumber(enteredNumber) ? enCaseNumber::Prime : enCaseNumber::NoPrime;
}

//function to print result based on enum value
void printResult(enCaseNumber result)
{
    if (result == enCaseNumber::Prime)
        cout << "Prime";
    else
        cout << "NoPrime";
}

//main function
int main()
{
	//read number from user
    long number = readNumber("Please enter a number: ");

	//check if number is prime and get enum value
    enCaseNumber result = finalCheck(number);

	//print result based on enum value
    printResult(result);

	//return 0 to indicate successful execution
    return 0;
}
