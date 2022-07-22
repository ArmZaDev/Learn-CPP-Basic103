#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // nested loops

    char symbol;
    int width;
    int height;

    cout << "Enter the symbol to use: ";
    cin >> symbol;

    cout << "Enter the width: ";
    cin >> width;

    cout << "Enter the height: ";
    cin >> height;

    for (int i = 0; i < width; i++) 
    {
        for (int j = 0; j < height; j++)
        {
            cout << symbol;
        }

        cout << endl;
    }

    cout << endl;
    return 0;
}