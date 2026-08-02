#include <iostream>
#include<iomanip>
using namespace std;

//define enum for operations
enum enOperations{add='+',sub='-',muhti='*',divi='/'};

//function to enter number
float enteredNumber(string message)
{
    float number;
    cout << message;
    cin >> number;

    return number;
  

}

//function to read operation
enOperations readoperation()
{
    char op;
    
    cout << "chocie the operation(+,-,*,/): ";
    cin >> op;

    return enOperations(op);

}

//function to calculate the result
float calculatre(float number1, float number2, enOperations ChoicedOperation)
{
    switch (ChoicedOperation)
    {
    case enOperations::add:
        return number1 + number2;
    case enOperations::sub:
        return number1 - number2;
    case enOperations::muhti:
        return number1 * number2;
    case enOperations::divi:
        switch (number2 != 0)
        {
        case true:
            return number1 / number2;
        default:
            cout<<"Error!!\tNo divition on zero\a\t";
            return 0;
        }

    default:
        cout << "Error Choice";
        return 0;
    }




}

//main function
int main()
{
	//declare two numbers and read them from the user
    float number1 = enteredNumber("Enter the first number: ");
    float number2 = enteredNumber("Enter the second number: ");

	//read the operation
    enOperations ChoicedOperation = readoperation();

	//calculate the result and display it
    cout << "\n\nthe result: " <<fixed<<setprecision(2)<< calculatre(number1, number2, ChoicedOperation);
    
	//display the end of the program
    return 0;
}
