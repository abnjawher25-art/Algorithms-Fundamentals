#include <iostream>

using namespace std;

// This function will read a number from the user and return it
float readnumber(string message)
{
    float enteredValue;

    cout << message;
    cin >> enteredValue;


    return enteredValue;

}

// This function will calculate the total of bill with service fee and tax
float GetEndTotalOfBillWithServicesFeeAndTax()
{
    const float servicesFee = 1.10;
    const float Tax = 1.16;

    float bill = readnumber("Enter the value of bill: ");

    return bill * servicesFee * Tax;

}

// This is the main function of the program
int main()
{


    float totalBill = GetEndTotalOfBillWithServicesFeeAndTax();

    cout << "| total of bill with service fee and tax: " << totalBill << " $  |\n";

    // Wait for 10 seconds before closing the program
    system("timeout 10>nul");

    // Clear the console screen and play a beep sound
    system("cls");

    // Play a beep sound
    system("echo \a");

    // Display a message indicating that the program is closing
    cout << "Program is closing...\n";

    //return 0 to indicate successful execution of the program
    return 0;
}
