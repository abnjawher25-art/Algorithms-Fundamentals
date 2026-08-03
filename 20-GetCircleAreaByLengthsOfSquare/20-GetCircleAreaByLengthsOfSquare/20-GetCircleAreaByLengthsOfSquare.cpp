#include <iostream>
using namespace std;

// This program calculates the area of a circle inscribed in a square. The user is prompted to enter the side length of the square, and the program calculates and displays the area of the inscribed circle.
float readSquareSide()
{
    // This function prompts the user to enter the side length of the square and returns the value as a float.
    float squareSide;

    // Prompt the user to enter the side length of the square
    cout << "Enter the sqare side: ";
    cin >> squareSide;

    // Return the entered value
    return squareSide;
}

// This function calculates the area of a circle inscribed in a square given the side length of the square. The area is calculated using the formula: Area = (π * r^2), where r is half the side length of the square.
float GetArea(float squareSide)
{
    // Calculate the area of the inscribed circle using the formula: Area = (π * r^2), where r is half the side length of the square.
    return (3.14 * squareSide * squareSide) / 4;
}

// This function prints the result of the area calculation to the console.
void printResult(float result)
{
    cout << "The area of circle: " << result;
}

// The main function orchestrates the flow of the program by calling the necessary functions to read input, calculate the area, and print the result.
int main()
{
    // Call the readSquareSide function to get the side length of the square, then pass it to GetArea to calculate the area of the inscribed circle, and finally print the result using printResult.
    printResult(GetArea(readSquareSide()));

    // Return 0 to indicate successful execution of the program.
    return 0;
}
