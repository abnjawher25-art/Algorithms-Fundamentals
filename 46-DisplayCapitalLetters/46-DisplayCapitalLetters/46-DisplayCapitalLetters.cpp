#include <iostream>
using namespace std;

// Function to print letters from A to Z
void printLettersFromAtoZ()
{
    for (short i = 65; i <= 90; i++)
        cout << char(i) << "   ";
    cout << endl;
}

// Main function
int main()
{
    // Call the function to print letters from A to Z
    printLettersFromAtoZ();

    // Wait for user input before closing the console window
    return 0;
}

