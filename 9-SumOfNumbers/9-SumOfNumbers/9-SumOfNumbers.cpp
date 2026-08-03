#include <iostream>
using namespace std;

//function to read three numbers from user
void readNumbers(float num[3])
{
	//input container to store the entered number
	float enteredNumber;

	for (short i = 0; i < 3; i++) {

		cout << "Enter the number(" << i + 1 << "): ";
		cin >> enteredNumber;

		num[i] = enteredNumber;
	}

}

//function to calculate the sum of three numbers
float GetSumOfNumbers(float num[3])
{
	return num[0] + num[1] + num[2];
}

//function to print the sum of three numbers
void printSumOfThatThreeNumbers(float SumOfNumbers)
{
	cout << "The sum: " << SumOfNumbers;
}

//main function
int main()
{
	//array to store three numbers
	float num[3];

	//call the function to read three numbers from user
	readNumbers(num);

	//call the function to calculate the sum of three numbers and print the result
	printSumOfThatThreeNumbers(GetSumOfNumbers(num));

	//return 0 to indicate successful execution
	return 0;
}

