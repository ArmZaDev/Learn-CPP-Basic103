#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h> //srand, rand
#include <time.h> //time
using namespace std;

int main()
{
    //pseudo-random numbers

    int number;
    int response;
    int score = 0;

    srand(time(NULL));

    //high = 10, low = 1 => 1-10
    number = rand() % 10 + 1; 

    do {
        cout << "Entr your guess (1-10): ";
        cin >> response;

        if (response > number) {
            cout << "That was too high!\n";
        }
        else if (response < number) {
            cout << "that was too low!\n";
        }
        else {
            cout << "That was correct!\n";
        }
        score++;

    } while (number != response);

    cout << "\nNumber is: " << number;
    cout << "\nguesses: " << score;



    /*
    srand(time(NULL));

    int number = rand() % 10 + 1;
    int number1 = rand() % 10 + 1;
    int number2 = rand() % 10 + 1;

    cout << number << " " << number1 << " " << number2 << " ";*/
   

    

    cout << endl;
    return 0;
}