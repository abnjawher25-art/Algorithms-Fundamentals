#include <iostream>

using namespace std;

// Function to read the number of range from user
short readNnmberOfRange()
{
    // Variable to store the number of range
    short Number;

    // Prompt the user to enter the number of range
    cout << "Enter the number of range: ";
    cin >> Number;

    // Return the number of range
    return Number;


}

// Function to print the loop of numbers from 1 to N
void printLoopOfNumbers(short Number)
{

    for (short i = 1; i <= Number; i++)
        cout << i << endl;

}

// Main function
int main()
{
    // Call the function to read the number of range and print the loop of numbers
    printLoopOfNumbers(readNnmberOfRange());

    // Return 0 to indicate successful execution
    return 0;
}

