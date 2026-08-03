#include <iostream>
#include<iomanip>
using namespace std;

//enumeration for days of the week
enum enDaysOfWeek { Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7 };

//function to read a number from the user
int readNumber(string message)
{
    int enteredNumber;

    cout << message;
    cin >> enteredNumber;


    return enteredNumber;

}

//function to get the day of the week based on the entered number
enDaysOfWeek GetDay(int dayNumber)
{
    enDaysOfWeek enteredDay;

    switch (dayNumber)
    {
    case 1: return enDaysOfWeek::Monday;
    case 2: return enDaysOfWeek::Tuesday;
    case 3: return enDaysOfWeek::Wednesday;
    case 4: return enDaysOfWeek::Thursday;
    case 5: return enDaysOfWeek::Friday;
    case 6: return enDaysOfWeek::Saturday;
    case 7: return enDaysOfWeek::Sunday;
    default:return  enDaysOfWeek(0);
    }

}

//function to print the result based on the entered day
void printResult(enDaysOfWeek enteredDay)
{
    switch (enteredDay)
    {
    case enDaysOfWeek::Monday: cout << "Today is Monday\n\n";
        break;
    case enDaysOfWeek::Tuesday: cout << "Today is Tuesday\n\n";
        break;
    case enDaysOfWeek::Wednesday: cout << "Today is Wednesday\n\n";
        break;
    case enDaysOfWeek::Thursday: cout << "Today is Thursday\n\n";
        break;
    case enDaysOfWeek::Friday: cout << "Today is Friday\n\n";
        break;
    case enDaysOfWeek::Saturday: cout << "Today is Saturday\n\n";
        break;
    case enDaysOfWeek::Sunday: cout << "Today is Sunday\n\n";
        break;

    default:cout << "\ainvalied choice!\n\n";

    }




}

//main function
int main()
{
    //formatting the output
    cout << setw(78) << "********************************************\n";
    cout << setw(60) << "Show day\n";
    cout << setw(78) << "********************************************\n";

    //read a number from the user
    int dayNumber = readNumber("Enter a number from(1) to(7): ");

    //get the day of the week based on the entered number and print the result
    printResult(GetDay(dayNumber));

    //wait for user input before closing the program
    cin.get();

    //return 0 to indicate successful execution
    return 0;
}

