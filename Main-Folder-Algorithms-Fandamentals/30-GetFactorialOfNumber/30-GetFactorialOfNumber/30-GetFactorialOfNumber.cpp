#include <iostream>

using namespace std;

// Function to read a number from the user
short readNumberOfFactorial()
{
    // Variable to store the number of factorial    
    short NumberOfFactorial;

    // Prompt the user to enter a number    
    cout << "Please enter a number to get a factorial: ";
    cin >> NumberOfFactorial;

    // Return the number entered by the user
    return NumberOfFactorial;

}

// Function to calculate the factorial of a number
int GetAFactorial(short NumberOfFactorial)
{
    // Variable to store the factorial result
    int factorial = 1;

    // Loop to calculate the factorial of the number
    for (short i = 1; i <= NumberOfFactorial; i++)
        factorial *= i;

    // Return the calculated factorial
    return factorial;
}

int main()
{
    // Read the number of factorial from the user
    short N = readNumberOfFactorial();

    // Calculate and display the factorial of the number
    cout << GetAFactorial(N);
    return 0;
}

