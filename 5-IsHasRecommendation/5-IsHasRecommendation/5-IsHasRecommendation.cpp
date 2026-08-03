#include <iostream>
using namespace std;
struct strInfo {
    short Age;
    bool HasDriveLicense;
    bool HasRecommendation;
};
/*for read a group of variables from structure
 we defined that function from that structure name*/
 /*we do not need to send a parameter to
 function ,so defind a local variable from
 structure name type and until do not defined another
 variable in the main function*/
strInfo readInfo()
{
    strInfo Info;
    cout << "Enter your age: ";
    cin >> Info.Age;
    cout << "Do you have a drive license:";
    cin >> Info.HasDriveLicense;
    cout << "Do you have a HasRecommendation:";
    cin >> Info.HasRecommendation;
    //return all values to function
    return Info;
}
/*send a parameter to function that
from structur type to take values
from structure*/
bool IsAccepted(strInfo Info)
{
    /*the state inside the() is the same
    if condition but it is short
    _ the final result it will be
    (true) or (false) that saved
    in the function*/
    return ((Info.Age > 21 && Info.HasDriveLicense) || Info.HasRecommendation);
}
/*when you have a print function that
prefer to put parameter inside the function*/
void printInfo(strInfo Info)
{
    /*check if the condition true
    print Hired*/
    if (IsAccepted(Info))
        cout << "Hired";
    else
        cout << "Rejected";
}
int main()
{
    /*to be smart do but a paramtere inside the
    read function that until do not defined
    a variable in the int main function*/
    printInfo(readInfo());

    return 0;
}

