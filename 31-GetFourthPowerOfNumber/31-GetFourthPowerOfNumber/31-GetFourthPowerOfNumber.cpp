#include <iostream>

using namespace std;

// This program will read a number from user and calculate the power of that number to 4 and display the result.
short readNumber()
{
    // This function will read a number from user and return it.
    short enteredNumber;

    // Prompt the user to enter a number
    cout << "Please enter a number to get power: ";
    cin >> enteredNumber;

    // Return the entered number
    return  enteredNumber;


}

// This function will calculate the power of the entered number to 4 and return the result.
short GetPowerOfNumber(short enteredNumber)
{
    // This function will calculate the power of the entered number to 4 and return the result.
    short valueOfFinalPower = 1;

    //    Loop to calculate the power of the entered number to 4
    for (short i = 1; i <= 4; i++)
    {
        valueOfFinalPower *= enteredNumber;

    }

    // Return the calculated power value
    return valueOfFinalPower;

}

// This function will display the result of the power calculation.
void powerResult(short result)
{

    cout << "the result of power is: " << result;

}

// The main function of the program
int main()
{

    // Call the readNumber function to get the number from user and then 
    // call GetPowerOfNumber function to calculate the power of that number to 4 
    // and then call powerResult function to display the result.
    powerResult(GetPowerOfNumber(readNumber()));

    // Return 0 to indicate successful execution of the program
    return 0;


}
