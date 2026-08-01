#include <iostream>
#include<iomanip>
using namespace std;

// Function to read values from the user
void readValues(float* oneIsoscelesTriangle, float *basic)
{
	// Prompt the user to enter the values for oneIsoscelesTriangle and basic
    cout << "Enter the oneIsoscelesTriangle: ";
    cin >> *oneIsoscelesTriangle;

	// Prompt the user to enter the value for basic
    cout << "Enter the basicTriangle: ";
    cin >> *basic;
}

// Function to calculate the area of a circle inscribed in an isosceles triangle
float GetAraeOfCircle(float oneIsoscelesTriangle, float basic)
{
    return (3.14 * (basic * basic / 4) * ((2 * oneIsoscelesTriangle - basic) / (2 * oneIsoscelesTriangle + basic)));
}

// Function to print the result
void pintResult(float result)
{
    cout << "\n\nThe arae of circle: " <<fixed<<setprecision(2)<< result;
}

// Main function
int main()
{
	// Declare variables to hold the values for oneIsoscelesTriangle and basic
    float OneIsoscelesTriangle=0, Basic=0;

	// Call the readValues function to get input from the user
    readValues(&OneIsoscelesTriangle, &Basic);

	// Call the GetAraeOfCircle function to calculate the area of the inscribed circle
    float result = GetAraeOfCircle(OneIsoscelesTriangle, Basic);

	// Call the pintResult function to display the result
    pintResult(result);

	// Return 0 to indicate successful execution
    return 0;
}

