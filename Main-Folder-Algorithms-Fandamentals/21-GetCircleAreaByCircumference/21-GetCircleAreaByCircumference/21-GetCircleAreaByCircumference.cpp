#include <iostream>
using namespace std;

// Function to read the circumference of a circle from user input
float readCircumferenceOfCircle()
{
	// Variable to store the circumference
	float Circumference;

	// Prompt the user to enter the circumference of the circle
	cout << "Enter Circumference of circle: ";
	cin >> Circumference;

	// Return the entered circumference
	return Circumference;
}

// Function to calculate the area of a circle given its circumference
float GetAreaOfCircle(float Circumference)
{
	// Calculate the area of the circle using the formula: Area = (Circumference^2) / (4 * π)			
	return (Circumference * Circumference) / 4 * 3.14;
}

// Function to print the result (area of the circle)
void printresult(float result)
{
	cout << "The area of circle: " << result;
}

// Main function to execute the program
int main()
{
	// Read the circumference of the circle, calculate the area, and print the result
	printresult(GetAreaOfCircle(readCircumferenceOfCircle()));

	// Return 0 to indicate successful execution
	return 0;
}

