#include <iostream>
using namespace std;

// Function to read the diameter of the circle from user input
float readDiameter()
{
	// Variable to store the diameter
    float Diameter;

	// Prompt the user to enter the diameter
    cout << "Enter the value of Diameter: ";
    cin >> Diameter;

	// Return the entered diameter
    return Diameter;
}

// Function to calculate the area of a circle given its diameter
float GetAreaOfCircle(float Diameter)
{
	// Calculate the area using the formula: Area = π * (Diameter / 2)^2
    return (3.14 * Diameter * Diameter) / 4;
}

// Function to print the result (area of the circle)
void printResult(float result)
{
    cout << "The area of circle: " << result;
}

// Main function to execute the program
int main()
{
	// Call the functions to read the diameter, calculate the area, and print the result
    printResult(GetAreaOfCircle(readDiameter()));

	// Return 0 to indicate successful execution
    return 0;
}
