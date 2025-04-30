// Function Overriding in C++
// Demonstrates runtime polymorphism using base and derived classes

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    // Function overriding
    void display() {
        cout << "This is a circle." << endl;
    }
};

int main() {
    Shape s;
    Circle c;

    cout << "Base class object: ";
    s.display();

    cout << "Derived class object: ";
    c.display();  // Overrides base class method

    return 0;
}
