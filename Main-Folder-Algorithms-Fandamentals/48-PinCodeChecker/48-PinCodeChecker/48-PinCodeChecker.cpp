#include <iostream>
using namespace std;

//global variable for pin code
const int PinCodeValue = 1234;

//global variable for maximum attempts
const int MaxAttempts = 3;

//function to read pin code from user
int readPinCode(string Message)
{
    int enteredNumber;
    cout << Message;
    cin >> enteredNumber;

    return enteredNumber;

}

//function to check pin code
bool checkPinCode()
{
    int PinCode;
    int attempts = 0;
    do {

        PinCode = readPinCode("Enter the Pin Code: ");

        if (PinCode == PinCodeValue) {
            return 1;
        }

        else
        {
            system("color 4F");
            cout << "\awrong pin code\n";
            cout << "\t\t\t\t\ttries left: " << MaxAttempts - attempts - 1 << endl;
            attempts++;

            if (attempts == MaxAttempts) {

                return 0;
            }

        }

    } while (PinCode != PinCodeValue && attempts < MaxAttempts);



}

//main function
int main()
{
    //check pin code
    if (checkPinCode())
    {
        system("color 2F");
        cout << "\nYour balance is " << 7500 << endl;
    }

    //if pin code is wrong
    else
    {
        system("color 4F");
        cout << "\nAccess denied. Please try again later." << endl;
    }

    //return 0 to indicate successful execution
    return 0;
}

