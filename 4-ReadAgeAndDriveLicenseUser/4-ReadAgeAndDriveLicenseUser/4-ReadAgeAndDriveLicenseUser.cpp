#include <iostream>
using namespace std;

//define a structure to store user information
struct strInfo {
    short Age;
    bool HasDriveLicense;
};

//function to read user information from input
strInfo readInfo()
{
    strInfo Info;
    cout << "Enter your age: ";
    cin >> Info.Age;
    cout << "Do you have a drive license:";
    cin >> Info.HasDriveLicense;

    //return the structure with the user information
    return Info;
}

//function to check if the user is accepted based on age and drive license
bool IsAccepted(strInfo readInfo)
{
    //check if the user is older than 21 and has a drive license
    return (readInfo.Age > 21 && readInfo.HasDriveLicense);
}

//function to print the acceptance status of the user
void printInfo(strInfo readInfo)
{
    //check if the user is accepted and print the corresponding message
    if (IsAccepted(readInfo))
        cout << "Hired";
    else
        cout << "Rejected";
}

//main function to execute the program
int main()
{
    //print the header for the acceptance criteria
    cout << "---------------------------------------------\n";
    cout << "condition(Age more than 21,own drive license)\n";
    cout << "---------------------------------------------\n";

    //call the printInfo function with the user information read from input
    printInfo(readInfo());

    //return 0 to indicate successful execution of the program
    return 0;
}

