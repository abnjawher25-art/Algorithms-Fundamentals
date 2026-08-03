#include <iostream>

using namespace std;

//function to read the base and power from the user
int readBacic()
{
    //variable to store the base entered by the user
    short enteredBasic;

    //prompt the user to enter the base
    cout << "Please enter the base : ";
    cin >> enteredBasic;

    //return the entered base
    return enteredBasic;

}

//function to read the power from the user
int readPower()
{
    //variable to store the power entered by the user
    short enteredPower;

    //prompt the user to enter the power
    cout << "Please enter the power : ";
    cin >> enteredPower;

    //return the entered power
    return enteredPower;

}

//function to calculate the power of a number
int Getpower(short EnteredPower, short enteredBasic)
{
    if (EnteredPower == 0)
        return 1;

    else if (EnteredPower == 1)
        return enteredBasic;

    else
    {
        int saveResult = 1;
        short startLoop = 1;
        for (startLoop; startLoop <= EnteredPower; startLoop++)
        {
            saveResult *= enteredBasic;
        }

        return saveResult;

    }




}

//function to print the result
void printResult(int saveResult)
{

    cout << "The result: " << saveResult;
}

//main function
int main()
{
    //call the functions to read the base and power from the user and calculate the power of the number
    printResult(Getpower(readPower(), readBacic()));

    return 0;
}
