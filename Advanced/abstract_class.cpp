// Abstract Class and Pure Virtual Function in C++
// Demonstrates interface-like behavior using abstract class

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape* s;

    Circle c;
    Square sq;

    s = &c;
    s->draw();  // Calls Circle's draw

    s = &sq;
    s->draw();  // Calls Square's draw

    return 0;
}
