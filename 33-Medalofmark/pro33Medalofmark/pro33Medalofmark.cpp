#include <iostream>
#include<string>

using namespace std;

// Function to read the mark from the user
float readMark()
 {
    float enteredMark;

    cout << "Enter the mark: ";
    cin >> enteredMark;

    return enteredMark;

 }

// Function to read the name of the student from the user
string readNameOfStudent()
 {
    string enteredName;

    cout << "Please enter the name of student: ";
    getline(cin, enteredName);

    return enteredName;
 }

// Function to check if the entered mark is in the valid range (0-100)
float checkRightMarkInRange()
{
    float rightMark = 0;
    do 
    {
        rightMark=readMark();
        if ((rightMark >= 0 && rightMark <= 100))
            break;
    } while ((readMark() >= 0 && readMark() <= 100));

    return rightMark;

}

// Function to print the medal based on the mark
void printResult(float rightMark,string name)
{
    
    if (rightMark< 50)
        cout <<"\nthe medal of student "<<name<< " is  F ";
    else if (rightMark >= 50 && rightMark <= 60)
        cout << "\nthe medal of student " << name << " is  E ";
    else if (rightMark >= 61 && rightMark <= 70)
        cout << "\nthe medal of student " << name << " is  D ";
    else if (rightMark >= 71 && rightMark <= 80)
        cout << "\nthe medal of student " << name << " is  C ";
    else if (rightMark >= 81 && rightMark <= 89)
        cout << "\nthe medal of student " << name << " is  B ";
    else if (rightMark >= 90 && rightMark <= 94)
        cout << "\nthe medal of student " << name << " is  A ";
    else
        cout << "\nthe medal of student " << name << " is  A+ ";
}

// Main function to execute the program
int main()
{
	// Call the functions to read the mark, check if it's in range, and print the result
    printResult(checkRightMarkInRange(),readNameOfStudent());
   
	// Return 0 to indicate successful execution
    return 0;
}
