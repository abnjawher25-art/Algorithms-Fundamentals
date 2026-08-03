#include <iostream>
using namespace std;

// Function to read a number from the user
int readNumber(string message)
{
    int enteredNumber;

    cout << message;
    cin >> enteredNumber;

    return enteredNumber;

}

// Function to convert days to seconds
int GetSecondsToDays(int number)
{
    return number * 60 * 60 * 24;

}

// Function to convert hours to seconds
int GetSecondsToHours(int number)
{
    return number * 60 * 60;

}

// Function to convert minutes to seconds
int GetSecondsTominutes(int number)
{
    return number * 60;

}

// Main function
int main()
{
    // Get the number of days, hours, minutes, and seconds from the user
    int numberSecondsOfDay = GetSecondsToDays(readNumber("Enter the number of days: "));
    int numberSecondsOfHour = GetSecondsToHours(readNumber("Enter the number of hours: "));
    int numberSecondsOfMinute = GetSecondsTominutes(readNumber("Enter the number of minutes: "));
    int numberSeconds = readNumber("Enter the number of seconds: ");

    // Calculate the total number of seconds
    int SumOfSeconds = numberSecondsOfDay + numberSecondsOfHour + numberSecondsOfMinute + numberSeconds;

    // Display the total number of seconds
    cout << "____________________________________________\n";
    cout << "\n The number of seconds: " << SumOfSeconds << " s";
    cout << "\n____________________________________________\n";

    // Return 0 to indicate successful execution
    return 0;
}

