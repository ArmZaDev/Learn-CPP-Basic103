#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string.length() returns length of a string
    
    string first_name;

    cout << "Enter your first name: ";
    getline(cin, first_name);

    //int length = first_name.length();
    if (first_name.length() >= 12) {
        cout << "Your name can't be over 12 characters long";
    }
    else {
        cout << "Welcome " << first_name;
    }


    // string.empty() returns true if empty
    if (first_name.empty()) {
        cout << "You didn't enter a name! >:(";
    }
    else {
        cout << "Welcome " << first_name;
    }

    /*
    // string.clear() clears a string
    string first_name;
    cout << "Enter your first name: ";
    getline(cin, first_name);

    cout << "welcome " << first_name << endl;
    cout << "Your name has been cleared*" << endl;

    first_name.clear();
    cout << "Welcome " << first_name << endl;
    */
    /*
    // string1.append(string2) appends a string
    string user_name;

    cout << "Enter your username: ";
    getline(cin, user_name);

    string email = user_name.append("@gmail.com");
    cout << "You email is now: " << email << endl;
    */
    /*
    // string1.at(x) returns a character at a given index
    string first_name;
    string middle_name;
    string last_name;

    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your middle name: ";
    getline(cin, middle_name);
    cout << "Enter your last name: ";
    getline(cin, last_name);

    char letter1 = first_name.at(0);
    char letter2 = middle_name.at(0);
    char letter3 = last_name.at(0);
    cout << "You initials are: " << letter1 << letter2 << letter3;
    */
    /*
    // string1.substr(int x, int y) retieve a portion of
    string first_name;

    cout << "Enter your first name: ";
    getline(cin, first_name);

    string nickname = first_name.substr(0, 3); //เริ่มที่ 0 ถึง 3

    cout << "Your nickname is " << nickname << endl;
    cout << "Hello " << nickname;
    */
    /*
    // string1.isert(int x, string2); Insert a string with
    string user_name;
    cout << "Enter your user_name: ";
    getline(cin, user_name);

    user_name.insert(0, "@"); //@xxxx
    cout << "reply: " << user_name;
    */
    /*
    // string1.find(string2); returns index of string2
    string first_name;
    cout << "Enter your first name: ";
    getline(cin, first_name);

    string substring;
    cout << "Search for which character/s?: ";
    getline(cin, substring);

    int position = first_name.find(substring);
    cout << "Found character/s at position: " << position;
    */
    /*
    //string1.erase(x,y) erases portion of a string
    
    string phone_number;
    cout << "Enter your phone number: ";
    getline(cin, phone_number);

    phone_number.erase(0, 4);
    cout << "phone number: " << phone_number;
    */

    cout << endl;
    return 0;
}