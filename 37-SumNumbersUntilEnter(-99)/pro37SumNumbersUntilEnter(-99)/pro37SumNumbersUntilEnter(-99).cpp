#include <iostream>
#include<string>
using namespace std;

//function to read a number from the user
float readNumber(string message)
{
    float number;
    cout << message;
    cin >> number;

    return number;

}

//function to sum the numbers entered by the user until -99 is entered
int sumEnteredNumbers()
{
    short counter = 1;
    int summation = 0,number=0;
    do
    {
        number= readNumber("enter number(" + to_string(counter) + "): ");

        if (number == -99)
        {
            break;
        }

        summation+=number;
        counter++;

    } while (number !=-99);

    return  summation;

}

//main function
int main()
{
	//message to the user
	cout << "Enter numbers to sum them up. Enter -99 to stop entering numbers." << endl;

	//call the function to sum the numbers entered by the user
	int sum = sumEnteredNumbers();

	//display the sum of the numbers entered by the user
    cout << "\nSum of entered numbers: " << sum << endl;

	//return 0 to indicate successful execution
    return 0;
}
