// Copy Constructor in C++
// This program demonstrates how to use a copy constructor.

#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "Copy constructor called!" << endl;
    }

    // Display function
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1("Ashu", 21);     // Normal constructor
    Person p2 = p1;            // Copy constructor invoked

    cout << "Original Object: ";
    p1.display();

    cout << "Copied Object: ";
    p2.display();

    return 0;
}
