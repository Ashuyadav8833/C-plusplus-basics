// Multiple Inheritance in C++
// This program demonstrates how a class can inherit from more than one base class.

#include <iostream>
using namespace std;

// Base class 1
class Engine {
public:
    void engineType() {
        cout << "Petrol engine\n";
    }
};

// Base class 2
class Body {
public:
    void bodyStyle() {
        cout << "Sedan body\n";
    }
};

// Derived class
class Car : public Engine, public Body {
public:
    void features() {
        cout << "Car has power steering and air conditioning\n";
    }
};

int main() {
    Car myCar;
    myCar.engineType();
    myCar.bodyStyle();
    myCar.features();

    return 0;
}
