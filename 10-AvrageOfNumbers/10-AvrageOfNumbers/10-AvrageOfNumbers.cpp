#include <iostream>
using namespace std;

// This program will ask the user to enter three numbers and then calculate the average of those numbers.
void readNumbers(float arr[3])
{
	// This function will read three numbers from the user and store them in the array arr.
	float enteredMark;

	// Loop to read three numbers from the user
	for (short i = 0; i < 3; i++) {

		// Prompt the user to enter a number
		cout << "Enter the Mark(" << i + 1 << "): ";
		cin >> enteredMark;

		// Store the entered number in the array
		arr[i] = enteredMark;
	}
}

// This function will calculate the sum of the numbers in the array arr.		
float GetSumOfMarks(float arr[3])
{
	// This function will calculate the sum of the numbers in the array arr.
	float sum = 0;

	for (short i = 0; i < 3; i++) {
		sum += arr[i];
	}

	// Return the sum of the numbers in the array
	return sum;
}

// This function will calculate the average of the numbers in the array arr.
float GetAverage(float arr[3])
{
	// This function will calculate the average of the numbers in the array arr.
	float average = float(GetSumOfMarks(arr)) / 3;

	// Return the average of the numbers in the array
	return average;
}

// This function will print the average of the numbers in the array arr.
void printAverage(float average)
{
	cout << "|_________________________|\n";
	cout << "|_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
	cout << "|-------------------------|\n";
	cout << "| The average: " << average << endl;
	cout << "|-------------------------|\n";
	cout << "|_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
	cout << "|-------------------------|\n";
}

// The main function will call the readNumbers, GetAverage, and printAverage functions to read three numbers from the user, calculate the average of those numbers, and print the average.
int main()
{
	// Declare an array to hold the three numbers entered by the user
	float marks[3];

	// Call the readNumbers function to read three numbers from the user and store them in the marks array
	readNumbers(marks);

	// Call the GetAverage function to calculate the average of the numbers in the marks array and store the result in the average variable
	printAverage(GetAverage(marks));

	// Return 0 to indicate that the program has completed successfully
	return 0;
}

