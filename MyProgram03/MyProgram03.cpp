#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    double x, y;

    cout << "This program will enter the max/min of two numbers" << endl;

    cout << "Enter in number 1: ";
    cin >> x;

    cout << "Enter in number 2: ";
    cin >> y;

    double z = max(x, y);
    cout << "Max = " << z;
    z = min(x, y);
    cout << "Min = " << z;

    /*
    double x, y;

    cout << "This program will return x ^ y" << endl;

    cout << "Enter in number 1: ";
    cin >> x;

    cout << "Enter in number 2: ";
    cin >> y;

    double z = pow(x, y);
    cout << z;
    */
    /*
    double x;

    cout << "This program will return square root of a #" << endl;

    cout << "Enter in number: ";
    cin >> x;

    double z = sqrt(x);
    cout << z;
    */
    /*
    double x;

    cout << "This program will return the absolute value of a #" << endl;

    cout << "Enter in number: ";
    cin >> x;

    double z = abs(x); // -42 = abs 42
    cout << z;
    */
    /*
    double x;

    cout << "This program will round a number to the nearest whole integer" << endl;

    cout << "Enter in number: ";
    cin >> x;

    double z = round(x);
    cout << z;
    */
    /*
    double x;

    cout << "This program will round a numvber UP" << endl;

    cout << "Enter in number: ";
    cin >> x;

    double z = ceil(x);
    cout << z;
    */
    /*
    double x;

    cout << "This program will round a numvber DOWN" << endl;

    cout << "Enter in number: ";
    cin >> x;

    double z = floor(x);
    cout << z;
    */


    cout << endl;
    return 0;
}