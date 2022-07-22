#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

double add(double num1, double num2);

int main()
{
    // functions

    double number1, number2;

    cout << "Enter in #1 : ";
    cin >> number1;
    cout << "Enter in #2 : ";
    cin >> number2;

    double result = add(number1, number2);

    cout << "Your result is: " << result << endl;
    //cout << add(number1, number2);

    cout << endl;
    return 0;
}

double add(double num1, double num2) {
    double result = num1 + num2;
    return result;
    //return num1 + num2;
}