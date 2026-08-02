#include <iostream>

using namespace std;

//function to read the total of bill and payment from the user
float readTotalOfBill(float *totalBill,string message)
{
    cout << message;
    cin >> *totalBill;

    return *totalBill;

}

//function to read the payment from the user
float getPayment(float *payment, string message)
{
	cout << message;
	cin >> *payment;

	return *payment;
}

//function to calculate the value of exchange
float valueOfExchange(float *totalBill, float *payment)
{

    return *payment - *totalBill;

}

//function to print the result of the exchange
void printResult(float result)
{

    if (result < 0)
    {
        cout << "\n\n\aTELL THE CUSTOMER TO PAY " << result * (-1) << " $";
        system("color c0");
    }
        
    else
    {
        cout << "\n\nRETURN FOR THE CUSTOMER THE REST  " << result << " $";
        system("color a0");
    }
        

}

//main function
int main()
{
    float totalBillValue, paymentValue;
    
    totalBillValue = readTotalOfBill(&totalBillValue, "Enter the value of bill: ");

    paymentValue = getPayment(&paymentValue, "Enter the payment: ");

    printResult(valueOfExchange(&totalBillValue, &paymentValue));

    return 0;
}

