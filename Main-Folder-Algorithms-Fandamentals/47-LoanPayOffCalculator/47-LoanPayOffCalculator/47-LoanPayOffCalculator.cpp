#include <iostream>
using namespace std;

// Function to read a number from the user with a message
int readNumber(string message)
{
	int enteredNumber;

	cout << message;
	cin >> enteredNumber;

	return enteredNumber;

}

// Function to calculate the number of months required to pay off the loan
float calculatePaymentInEachMonth(float AmountOfMoney, float PaymentInAmonth)
{

	return AmountOfMoney / PaymentInAmonth;

}

// Main function
int main()
{
	// Prompt the user for loan amount and monthly payment
	float AmountOfMoney = readNumber("Enter the mount of loan Amount: ");
	float PaymentInAmonth = readNumber("How many money can you pay in a month: ");
	float PayMent = calculatePaymentInEachMonth(AmountOfMoney, PaymentInAmonth);

	// Display the result
	cout << "\nThe payment it will be in ( " << PayMent << " ) months.\n";

	// Return 0 to indicate successful execution
	return 0;
}
