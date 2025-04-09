// Constructors in Inheritance in C++
// Demonstrates constructor call order in single inheritance

#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }
};

int main() {
    Derived obj;  // First Base(), then Derived()

    return 0;
}
