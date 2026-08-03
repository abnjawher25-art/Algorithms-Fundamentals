#include <iostream>
#include<iomanip>
using namespace std;

// Define an enumeration for the months of the year
enum enMonthOfWeek { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, Septemper = 9, October = 10, November = 11, December = 12 };

// Function to read a number from the user with a message prompt
int readNumber(string message)
{
    int enteredNumber;

    cout << message;
    cin >> enteredNumber;


    return enteredNumber;

}

// Function to get the month enumeration value based on the entered day number
enMonthOfWeek GetMonth(int dayNumber)
{
    enMonthOfWeek enteredMonth;

    switch (dayNumber)
    {
    case 1: return enMonthOfWeek::January;
    case 2: return enMonthOfWeek::February;
    case 3: return enMonthOfWeek::March;
    case 4: return enMonthOfWeek::April;
    case 5: return enMonthOfWeek::May;
    case 6: return enMonthOfWeek::June;
    case 7: return enMonthOfWeek::July;
    case 8: return enMonthOfWeek::August;
    case 9: return enMonthOfWeek::Septemper;
    case 10: return enMonthOfWeek::October;
    case 11: return enMonthOfWeek::November;
    case 12: return enMonthOfWeek::December;
    default:return  enMonthOfWeek(0);
    }

}

// Function to print the result based on the entered month enumeration value
void printResult(enMonthOfWeek enteredMonth)
{
    switch (enteredMonth)
    {
    case enMonthOfWeek::January: cout << "The month is January\n\n";
        break;
    case enMonthOfWeek::February: cout << "The month is February\n\n";
        break;
    case enMonthOfWeek::March: cout << "The month is March\n\n";
        break;
    case enMonthOfWeek::April: cout << "The month is April\n\n";
        break;
    case enMonthOfWeek::May: cout << "The month is May\n\n";
        break;
    case enMonthOfWeek::June: cout << "The month is June\n\n";
        break;
    case enMonthOfWeek::July: cout << "The month is July\n\n";
        break;
    case enMonthOfWeek::August: cout << "The month is August\n\n";
        break;
    case enMonthOfWeek::Septemper: cout << "The month is Septemper\n\n";
        break;
    case enMonthOfWeek::October: cout << "The month is October\n\n";
        break;
    case enMonthOfWeek::November: cout << "The month is November\n\n";
        break;
    case enMonthOfWeek::December: cout << "The month is December\n\n";
        break;

    default:cout << "\n\aunavailable choice!\n\n";

    }

}

// Main function to execute the program
int main()
{
    //formatting the output with setw for alignment
    cout << setw(78) << "********************************************\n";
    cout << setw(60) << "Show month\n";
    cout << setw(78) << "********************************************\n";

    // Prompt the user to enter a number corresponding to a month
    int enteredMonth = readNumber("Enter a number from(1) to(12): ");

    // Get the month enumeration value based on the entered number and print the result
    printResult(GetMonth(enteredMonth));

    // Pause the program before exiting
    system("pause");

    // Return 0 to indicate successful execution
    return 0;
}

