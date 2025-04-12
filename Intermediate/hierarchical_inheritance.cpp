// Hierarchical Inheritance in C++
// Demonstrates multiple derived classes from a single base class

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animals make sounds" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.sound();
    d.bark();

    c.sound();
    c.meow();

    return 0;
}
