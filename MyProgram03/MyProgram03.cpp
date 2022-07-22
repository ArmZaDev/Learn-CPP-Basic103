#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // for loops

    string word;

    cout << "Enter the word to spell: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++) { 
        cout << word.at(i) << " ";
    }


    /*for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    for (int i = 5; i >= 1; i--) {
        cout << i << endl;
    }*/
    

    cout << endl;
    return 0;
}