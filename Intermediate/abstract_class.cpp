// Abstract Class and Pure Virtual Function in C++
// Demonstrates how abstract classes enforce implementation in derived classes

#include <iostream>
using namespace std;

// Abstract class with a pure virtual function
class Shape {
public:
    virtual void area() = 0;  // Pure virtual function
};

// Derived class 1
class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle = π * r * r" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of Rectangle = length * breadth" << endl;
    }
};

int main() {
    Shape* s;

    Circle c;
    Rectangle r;

    s = &c;
    s->area();

    s = &r;
    s->area();

    return 0;
}
