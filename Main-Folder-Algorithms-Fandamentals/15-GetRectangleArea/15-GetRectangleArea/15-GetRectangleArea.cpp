#include <iostream>
#include<iomanip>
using namespace std;

//function to read length and width of rectangle
void readLengthAndWidith(float& Length, float& Width)
{
    cout << "Enter the length of rectangle: ";
    cin >> Length;
    cout << "Enter the width of rectangle: ";
    cin >> Width;
}

//function to calculate area of rectangle
float areaOfRectangle(float& Length, float& Width)
{
    return Length * Width;
}

//function to print area of rectangle
void printAreaOfRectangle(float Area)
{
    cout << "\n\nthe area of rectangle: " << Area;
}

//main function
int main()
{
    //declare variables
    float Length, Width;

    //call function to read length and width of rectangle
    readLengthAndWidith(Length, Width);

    //call function to calculate area of rectangle and print area of rectangle
    printAreaOfRectangle(areaOfRectangle(Length, Width));

    //return 0 to indicate successful execution
    return 0;
}

