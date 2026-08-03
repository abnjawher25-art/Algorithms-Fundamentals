#include <iostream>
using namespace std;

// This structure is used to store the number of days, hours, minutes, and seconds
struct strTimePartion {

    float secondsOfDays, secondsOfHours, secondsOfMinutes, staySeconds;

};

// function to read a positive number from the user
int readPositiveNumber(string message)
{
    int enteredNumber;

    cout << message;
    cin >> enteredNumber;

    return enteredNumber;

}

// function to partition the total number of seconds into days, hours, minutes, and remaining seconds
strTimePartion GetPartionOfTime(int Seconds)
{
    // Create a container to hold the partitioned time values
    strTimePartion container;

    // Initialize a variable to hold the remainder of seconds after calculating days, hours, and minutes
    int remainder = 0;

    container.secondsOfDays = floor(Seconds / (24 * 3600));
    remainder = Seconds % (24 * 3600);

    container.secondsOfHours = floor(remainder / 3600);
    remainder = remainder % (3600);

    container.secondsOfMinutes = floor(remainder / 60);
    remainder = remainder % (60);

    container.staySeconds = remainder;



    return container;

}

// function to print the partitioned time values
void printResult(strTimePartion container)
{

    cout << endl << container.secondsOfDays << ":" << container.secondsOfHours << ":" << container.secondsOfMinutes << ":" << container.staySeconds << endl;

}

// main function to execute the program
int main()
{
    // Read the total number of seconds from the user
    int Seconds = readPositiveNumber("Enter the number of seconds: ");

    // Partition the total number of seconds into days, hours, minutes, and remaining seconds
    printResult(GetPartionOfTime(Seconds));

    // Return 0 to indicate successful execution of the program

    return 0;
}

