
#include <iostream>
using namespace std;

// This program will ask the user to enter a number in a specific range, and will keep asking until the user enters a valid number.
short readNumber()
{
    // This function will read a number from the user and return it.
    short num;

    // Ask the user to enter a number
    cout << "Please Enter Your num: ";
    cin >> num;

    // Return the number entered by the user
    return num;
}

// This function will check if the number is in the range [from, to]
bool CheckNumberInRange(short number, short from, short to)
{

    return (number >= from && number <= to);

}

// This function will ask the user to enter a number in the range [from, to] and will keep asking until the user enters a valid number.
short returnEnteredNumber(short from, short to)
{
    short num = 0;

    do {

        num = readNumber();

        if (!CheckNumberInRange(num, from, to))
            cout << "\nout range ! try again.\n";

        if (num < from)
            cout << "lower value\n\n";


        if (num > to)
            cout << "height value\n\n";

    } while (!CheckNumberInRange(num, from, to));


    return num;
}

// This function will print the result to the user.
void printResult(short num)
{

    cout << "\n\n\t\tYour num is: " << num;

}

// This is the main function of the program.
int main()
{
    // Ask the user to enter a number in the range [18, 45] and print the result.
    printResult(returnEnteredNumber(18, 45));

    // Return 0 to indicate that the program ended successfully.
    return 0;
}

