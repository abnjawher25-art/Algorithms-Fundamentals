#include <iostream>
#include<cmath>
using namespace std;

//function to read the values of side and diagonal
void readValues(float& side, float& Diagonal)
{
    cout << "Enter the value of any known side: ";
    cin >> side;
    cout << "Enter the value of Diagonal: ";
    cin >> Diagonal;
}

//function to calculate the area of rectangle
float GetAreaOfRectangle(float side, float Diagonal)
{
    return side * (sqrt(pow(Diagonal, 2) - pow(side, 2)));
}

//function to print the area of rectangle
void printAreaOfRectangle(float Area)
{
    cout << "\n\nArea of rectangle: " << Area;

}

//main function
int main()
{
	//declare variables
    float side, Diagonal;

	//invoke the functions
    readValues(side, Diagonal);

	//invoke the function to calculate the area of rectangle and print the area of rectangle
    printAreaOfRectangle(GetAreaOfRectangle(side,Diagonal));

	//return 0 to indicate successful execution
    return 0;
}
