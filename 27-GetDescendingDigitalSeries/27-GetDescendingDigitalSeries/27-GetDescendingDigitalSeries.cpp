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

// Function to print the loop of numbers from N to 1
void printLoopOfNumbers(short Number)
{

    for (short i = Number; i >= 1; i--)
        cout << i << endl;

}

// Main function
int main()
{
    // Variable to store the number of range
    short N = readNnmberOfRange();

    // Call the function to print the loop of numbers from N to 1
    printLoopOfNumbers(N);

    // Return 0 to indicate successful execution
    return 0;
}

