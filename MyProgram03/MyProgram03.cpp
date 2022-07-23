#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    //pointers
    // & address-of operator
    // * dereference operator

    string name = "ArmZa";
    int age = 100;

    string* pName = &name;
    int* pAge = &age;

    cout << *pName << endl;
    cout << *pAge << endl;
    

    cout << endl;
    return 0;
}