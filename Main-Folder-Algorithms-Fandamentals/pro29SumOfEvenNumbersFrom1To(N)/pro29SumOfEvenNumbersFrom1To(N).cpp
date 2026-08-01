#include <iostream>

using namespace std;

// This program calculates the sum of even numbers from 1 to N, where N is a user-defined range.
enum enAllCases { Odd = 1, Even = 2 };

// Function to read the number of range from the user
short readNnmberOfRange()
{
	// Prompt the user to enter the number of range
    short Number;

	// Read the number of range from the user
    cout << "Enter the number of range: ";
    cin >> Number;

	// Validate the input to ensure it is a positive number
    return Number;


}

// Function to check if a number is odd or even
enAllCases CheckOddNumbers(short Number)
{

    if (Number % 2 == 0)
        return enAllCases::Even;
    else
        return enAllCases::Odd;

}

// Function to calculate the sum of even numbers from 1 to N
short printSumLoopOfNumbers(short Number)
{
    short sum = 0;
    for (short i = 1; i <= Number; i++)
    {
        if (CheckOddNumbers(i) == enAllCases::Even)
            sum += i;

    }

    return sum;

}

// Main function
int main()
{
	// Read the number of range from the user
    short N = readNnmberOfRange();

	// Calculate and print the sum of even numbers from 1 to N
    cout << printSumLoopOfNumbers(N);

	// Return 0 to indicate successful execution
    return 0;
}

