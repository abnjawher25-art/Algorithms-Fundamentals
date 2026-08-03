#include <iostream>
using namespace std;

//define a structure to hold first and last name
struct strInfoName {
    string firstName;
    string LastName;
};

//function to read first and last name from user input
strInfoName readNames()
{
    strInfoName InfoName;
    cout << "Enter the first Name: ";
    cin >> InfoName.firstName;
    cout << "Enter the last Name: ";
    cin >> InfoName.LastName;
    return InfoName;
}

//function to concatenate first and last name into a full name
string GetFullName(strInfoName InfoName)
{
    string fullName;
    fullName = InfoName.firstName + " " + InfoName.LastName;
    return fullName;
}

//function to print the full name
void printInfoName(string fullName)
{
    cout << "____________________________________________\n";
    cout << "the full tName: " << fullName << endl;
    cout << "____________________________________________\n";
}

//main function to call the above functions
int main()
{
    //call the readNames function to get first and last name from user input
    printInfoName(GetFullName(readNames()));
    return 0;
}

