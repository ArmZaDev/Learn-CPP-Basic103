#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Human {
public:
    string name;
    int age;
    double weight;

    void eat() {
        cout << this->name << " is eating" << endl;
    }
    void drink() {
        cout << this->name << " is drinking" << endl;
    }
    void sleep() {
        cout << this->name << " is sleping" << endl;
    }

};

int main()
{
    Human human1;
    Human human2;
    Human human3;

    human1.name = "Tommy";
    human1.age = 35;

    human2.name = "Morty";
    human2.age = 16;

    human3.name = "Jerry";
    human3.age = 45;

    human1.eat();
    human2.drink();
    human3.sleep();

    cout << human1.name << endl;
    cout << human1.age << endl;
    
    
    cout << endl;
    return 0;
}