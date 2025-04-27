// Inheritance in C++
// Demonstrates single inheritance

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Dog myDog;

    myDog.eat();   // Inherited function
    myDog.bark();  // Own function

    return 0;
}
