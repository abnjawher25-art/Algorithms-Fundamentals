#include <iostream>
using namespace std;

//define a structure to hold the amount of each type of coin
struct strAllMoney {
    //define the amount of each type of coin
    short Pennies, Nickels, Dimes, Quarters, Dollars;
};

//function to read the amount of each type of coin from the user
strAllMoney readBiggyBankContant()
{
    //define a variable of type strAllMoney to hold the amount of each type of coin
    strAllMoney BiggyBankContant;


    cout << "Enter the mount of Pennies: ";
    cin >> BiggyBankContant.Pennies;

    cout << "Enter the mount of Nickels: ";
    cin >> BiggyBankContant.Nickels;

    cout << "Enter the mount of Dimes: ";
    cin >> BiggyBankContant.Dimes;

    cout << "Enter the mount of Quarters: ";
    cin >> BiggyBankContant.Quarters;

    cout << "Enter the mount of Dollars: ";
    cin >> BiggyBankContant.Dollars;

    //return the structure containing the amount of each type of coin
    return BiggyBankContant;

}

//function to calculate the total amount of money in pennies
short calculateSumOfPennies(strAllMoney BiggyBankContant)
{
    //define a variable to hold the total amount of money in pennies
    short sumOfPennies;

    //calculate the total amount of money in pennies
    sumOfPennies = BiggyBankContant.Pennies * 1 + BiggyBankContant.Nickels * 5 +
        BiggyBankContant.Dimes * 10 + BiggyBankContant.Quarters * 25 + BiggyBankContant.Dollars * 100;

    //return the total amount of money in pennies
    return sumOfPennies;

}

//main function to execute the program
int main()
{
    //call the function to read the amount of each type of coin from the user and store it in a variable
    short sumOfPennies = calculateSumOfPennies(readBiggyBankContant());
    cout << "\n\nThe Total of Pennies: " << sumOfPennies;
    cout << "\n\nThe Total of Dollars: " << (float)sumOfPennies / 100;

    //return 0 to indicate successful execution of the program
    return 0;
}
