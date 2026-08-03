#include <iostream>
using namespace std;

// This program reads three marks from the user, calculates the average, and checks if the average is a passing grade (50 or above).
// It uses an enum to represent the final result (Pass or Fail).
enum finalResult { Fail = 0, Pass = 1 };

// Function to read three marks from the user
void readMarks(short arr[3])
{
    // Read three marks from the user and store them in the array
    for (int i = 0; i < 3; i++)
    {
        do {

            // Prompt the user to enter a mark
            cout << "Enter the mark " << i + 1 << ": ";
            cin >> arr[i];

            // Check if the entered mark is valid (between 0 and 100)
            if (arr[i] < 0 || arr[i] > 100)
                cout << "Invalid mark. Please enter a mark between 0 and 100." << endl;

        } while (arr[i] < 0 || arr[i] > 100);
    }
}

// Function to calculate the sum of marks
void GetSumOfMarks(short arr[3])
{
    arr[0] += arr[1] += arr[2];
}

// Function to calculate the average of marks
float GetMarksAverage(short arr[3])
{
    return float(arr[0] + arr[1] + arr[2]) / 3;
}

// Function to check if the average is a passing grade
finalResult checkRateOfAgerage(float average)
{
    // Check if the average is greater than or equal to 50
    if (average >= 50)
        return finalResult::Pass;
    else
        return finalResult::Fail;
}

// Function to print the final result based on the average
void printFinalResult(float average)
{
    cout << "The average: " << average << endl;
    if (checkRateOfAgerage(average) == finalResult::Pass)
        cout << "Pass";
    else
        cout << "Fail";
}

// Main function
int main()
{
    // Declare an array to hold the three marks
    short marks[3];

    // Read the marks from the user
    readMarks(marks);

    // Calculate the average and print the final result
    printFinalResult(GetMarksAverage(marks));

    // Return 0 to indicate successful execution
    return 0;
}

