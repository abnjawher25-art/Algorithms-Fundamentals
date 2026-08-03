#include <iostream>
using namespace std;

// Function to read the radius of circle
float readRadius()
{
	// Variable to store the radius of circle
	float Radius;

	// Prompt the user to enter the radius of circle
	cout << "Enter the Radius of circle: ";
	cin >> Radius;

	// Return the radius of circle	
	return Radius;
}

// Function to calculate the area of circle
float GetAreaOfCircle(float Radius)
{
	return 3.14 * Radius * Radius;
}

// Function to print the area of circle
void printResult(float result)
{
	cout << "The area of circle: " << result;
}

//main function
int main()
{
	// Call the functions to read the radius, calculate the area, and print the result
	printResult(GetAreaOfCircle(readRadius()));

	// Return 0 to indicate successful execution
	return 0;
}
