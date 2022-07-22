#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // printf()

    string make = "Ford";
    string model = "Mustang";

    int year = 2022;
    double price = 999.000;

    char for_sale = 'Y';

    printf("Your car is made by: %s", make.c_str()); cout << endl;
    printf("Your car is a: %s %s", make.c_str(), model.c_str()); cout << endl;

    printf("The year is: %d", year); cout << endl;
    printf("The price is: %.2f", price); cout << endl;
    printf("Is it for sale: %c", for_sale); cout << endl;

    cout << endl;
    return 0;
}