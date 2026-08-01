#include <iostream>
using namespace std;

// Function to read age from user
short readAge()
{
	// Variable to store age
    short Age;

	// Prompt user to enter age
    cout << "Enetr the age: ";
    cin >> Age;

	// Return the entered age
    return Age;

}

// Function to validate the entered number
bool ValidateEnteredNumber(short number,short from,short to)
  {

    return (number>= from&& number <= to);

  }

// Function to print the result based on validation
void printResult(short Age)
  {

    (ValidateEnteredNumber(Age, 18, 45)) ? cout << "\nvalidate age" : cout << "\ninvalid age";

  }

// Main function
int main()
{
	// Call the readAge function and print the result
    printResult(readAge());

	// Return 0 to indicate successful executions
    return 0;
}
