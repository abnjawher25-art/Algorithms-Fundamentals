#include <iostream>
using namespace std;

// Function to read the total of sales from the user
int readAountOfSales()
{
	// declare a variable to store the total of sales
	int enteredTotalOfSales;

	// prompt the user to enter the total of sales
	cout << "Enter the total of sales: ";
	cin >> enteredTotalOfSales;

	// validate the input
	do
	{
		if (cin.fail())
		{
			cin.clear(); // clear the error flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the invalid input
			cout << "Invalid input. Please enter a number." << endl;
			cout << "Enter the total of sales: ";
			cin >> enteredTotalOfSales;
		}
	} while (cin.fail());

	return enteredTotalOfSales;

}

// Function to calculate the percentage of total sales based on the entered total of sales
float ValueOfPresentage(int enteredTotalOfSales)
{
	if (enteredTotalOfSales > 1000000)
		return enteredTotalOfSales * 0.01;
	else if (enteredTotalOfSales <= 1000000 && enteredTotalOfSales > 500000)
		return enteredTotalOfSales * 0.02;
	else if (enteredTotalOfSales <= 500000 && enteredTotalOfSales > 100000)
		return enteredTotalOfSales * 0.03;
	else if (enteredTotalOfSales <= 100000 && enteredTotalOfSales > 50000)
		return enteredTotalOfSales * 0.05;
	else
		return enteredTotalOfSales * 0.0;

}

// Main function to execute the program
int main()
{
	// call the readAountOfSales function to get the total of sales from the user
	// and pass it to the ValueOfPresentage function to calculate the percentage of total sales
	cout << ValueOfPresentage(readAountOfSales());

	// return 0 to indicate successful execution
	return 0;
}
