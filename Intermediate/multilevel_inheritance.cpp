// Multilevel Inheritance in C++
// Demonstrates a class inheriting from a derived class

#include <iostream>
using namespace std;

// Base class
class Grandparent {
public:
    void familyOrigin() {
        cout << "Family origin: Grandparent" << endl;
    }
};

// Derived class
class Parent : public Grandparent {
public:
    void parentTraits() {
        cout << "Traits inherited from Parent" << endl;
    }
};

// Further derived class
class Child : public Parent {
public:
    void childBehavior() {
        cout << "Child exhibits unique behavior" << endl;
    }
};

int main() {
    Child c;

    c.familyOrigin();   // From Grandparent
    c.parentTraits();   // From Parent
    c.childBehavior();  // From Child

    return 0;
}
