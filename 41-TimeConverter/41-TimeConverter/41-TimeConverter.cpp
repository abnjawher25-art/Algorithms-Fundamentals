#include <iostream>
#include<iomanip>
using namespace std;

// Function to read the number of hours from the user
int readNumberOfHours(string message)
{
	int enteredHours;

	cout << message;
	cin >> enteredHours;

	return enteredHours;

}

// Function to convert hours to days
float GetNumbersOfDays(int number)
{

	return float(number) / 24;
}

// Function to convert days to weeks
float GetNumbersOfWeeks(int number)
{

	return float(number) / 7;

}

// Main function
int main()
{
	// Prompt the user to enter the number of hours
	int numberOfHours = readNumberOfHours("Enter the number of hours: ");

	// Calculate the number of days and weeks based on the entered hours
	float numberOfDays = GetNumbersOfDays(numberOfHours);

	// Calculate the number of weeks based on the calculated days
	float numberOfWeeks = GetNumbersOfWeeks(numberOfDays);

	// Display the results to the user
	cout << "\nThe number of hours: " << numberOfHours;
	cout << "\n The number of days: " << fixed << setprecision(2) << numberOfDays;
	cout << "\n The number of weeks: " << fixed << setprecision(2) << numberOfWeeks;


	return 0;
}

