#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Human {
public:
    string name;
    int age;
    double weight;
    Human(string name, int age, double weight) {

        this->name = name;
        this->age = age;
        this->weight = weight;

    }

    //Human(string name, int age, double weight);
    
};

/*
//scope resolution :: operator
Human::Human(string name, int age, double weight) {

    this->name = name;
    this->age = age;
    this->weight = weight;
}
*/



int main()
{
    // constructors = special function that is automatically called when an object is instantiated
    //useful for assigning argument to variables

    Human human1("Tommy", 35, 60);
    Human human2("Morty", 16, 80);

    cout << human1.name << endl;
    cout << human1.age << " yo" << endl;
    cout << human1.weight << " kgs" << endl;


    cout << endl;
    return 0;
}