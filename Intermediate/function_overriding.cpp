// Function Overriding in C++
// Demonstrates how derived class overrides a base class function

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() {  // Overrides base class function
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal a;
    Dog d;

    a.sound();  // Calls base class version
    d.sound();  // Calls derived class version

    return 0;
}
