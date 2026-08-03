#include <iostream>

using namespace std;

// This program calculates the sum of odd numbers from 1 to N, where N is a user-defined range.
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
    while (Number <= 0)
    {
        cout << "Please enter a positive number: ";
        cin >> Number;
    }

    // Return the validated number
    return Number;


}

// Function to check if a number is odd or even
enAllCases CheckOddNumbers(short Number)
{
    if (Number % 2 != 0)
        return enAllCases::Odd;
    else
        return enAllCases::Even;

}

// Function to calculate the sum of odd numbers from 1 to N
short printSumLoopOfNumbers(short Number)
{
    short sum = 0;
    for (short i = 1; i <= Number; i++)
    {
        if (CheckOddNumbers(i) == enAllCases::Odd)
            sum += i;

    }

    // Return the calculated sum of odd numbers
    return sum;

}

// Main function to execute the program
int main()
{
    // Read the number of range from the user
    short N = readNnmberOfRange();

    // Calculate and print the sum of odd numbers from 1 to N
    cout << printSumLoopOfNumbers(N);

    // Return 0 to indicate successful execution
    return 0;
}

