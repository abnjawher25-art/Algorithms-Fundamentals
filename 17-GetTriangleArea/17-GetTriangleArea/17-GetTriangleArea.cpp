#include <iostream>
using namespace std;

// Function to read the values of triangle base and height
void readValues(float& base, float& height)
{
	cout << "Enter the value of triangle base: ";
	cin >> base;
	cout << "Enter the value of triangle height: ";
	cin >> height;
}

// Function to calculate the area of a triangle
float GetAreaOfTriangle(float base, float height)
{
	return 0.5 * base * height;
}

// Function to print the result
void printResult(float Area)
{
	cout << "\n\nThe area of triangle: " << Area;
}

// Main function
int main()
{
	// Declare variables to hold the base and height of the triangle	
	float base, height;

	// Call the function to read the values of base and height
	readValues(base, height);

	// Call the function to calculate the area of the triangle and print the result
	printResult(GetAreaOfTriangle(base, height));

	// Return 0 to indicate successful execution
	return 0;
}

