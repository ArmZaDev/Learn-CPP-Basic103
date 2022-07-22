#include <iostream>
using namespace std;

int main()
{
    int temperature;

    cout << "Please enter the temperature (C): ";
    cin >> temperature;

    if (temperature >= 30) {
        cout << "It is HOT outside ,:/";
    }
    else if (temperature <= 0) {
        cout << "It is COLD outside *brrrrr*";
    }
    else {
        cout << "It is warm outside :)";
    }


    /*
    int age = 12;

    if (age >= 18) 
    {
        cout << "cograts! You are an adult";
    }
    else 
    {
        cout << "You are not an adult!";
    }
    cout << endl;
    */

    return 0;
}