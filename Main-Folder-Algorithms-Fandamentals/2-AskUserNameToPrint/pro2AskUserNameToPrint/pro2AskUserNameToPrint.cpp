#include <iostream>
#include<string>
using namespace std;

// Function to read the user's name
string readUserName()
{ 
	// Prompt the user to enter their name
    string name;

	// Read the user's name from standard input
    cout << "Enter your name: ";
    getline(cin, name);

	// Return the user's name
    return name;
}

// Function to print the user's name
void printUserName(string userName)
{
    cout << "The name: " << userName << endl;
}

// Main function
int main()
{
	// Call the readUserName function to get the user's name and then print it
    printUserName(readUserName());

	// Return 0 to indicate successful execution
    return 0;
}

