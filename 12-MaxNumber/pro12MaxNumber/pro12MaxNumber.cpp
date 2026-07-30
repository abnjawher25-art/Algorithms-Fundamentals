#include <iostream>
using namespace std;

// Function to read two numbers from the user
void readNumbers(short arr[2])
{
	for (short i = 0; i < 2; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> arr[i];
	}
}

// Function to get the maximum number from the array
short GetMaxNumber(short arr[2])
{
	// Compare the two numbers and return the maximum or 0 if they are equal
    return (arr[0] > arr[1]) ? arr[0] : (arr[0] == arr[1]) ? 0 : arr[1];
}

// Function to print the maximum number or indicate if the numbers are equal
void printMaxNumber(short maxNumber)
{
	// Print the maximum number or indicate if the numbers are equal
    (maxNumber == 0) ? cout << "equal numbers" : cout << "the max number: " << maxNumber;
}

// Main function to execute the program
int main()
{
	// Declare an array to hold two numbers
    short numbers[2];

	// Read the numbers from the user
    readNumbers(numbers);

	// Get the maximum number and print it
    printMaxNumber(GetMaxNumber(numbers));

	// Return 0 to indicate successful execution
    return 0;
}

