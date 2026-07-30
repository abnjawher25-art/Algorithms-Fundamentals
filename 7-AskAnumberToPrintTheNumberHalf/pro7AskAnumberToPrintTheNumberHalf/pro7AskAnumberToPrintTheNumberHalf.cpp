#include <iostream>
using namespace std;

// Function to read a number from the user
short readNumber()
{
	// Variable to store the entered number
    float enteredNumber;

	// Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> enteredNumber;

	// Return the entered number
    return enteredNumber;
}

// Function to calculate half of the entered number
float GetHalfNumber(short enteredNumber)
{
	// Variable to store the half number
    float halfNumber;

	// Calculate half of the entered number
    float calculatevalue = 0.5;

	// Calculate the half number
	halfNumber = enteredNumber * calculatevalue;

	// Return the half number
    return halfNumber;
}

// Function to print the half number
void printHalfNumber(float halfNumber, float enteredNumber)
{
    cout << "_______________________________\n";
    cout << "****************************\n";
    cout << "The half number of("<<enteredNumber<<"): " << halfNumber;
    cout << "\n****************************\n";
    cout << "_______________________________\n";

}

// Main function
int main()
{
	// Variable to store the entered number
	int enteredNumber = readNumber();

	// Call the function to calculate half of the entered number and print it
    printHalfNumber(GetHalfNumber(enteredNumber), enteredNumber);

	// Return 0 to indicate successful execution
    return 0;
}
