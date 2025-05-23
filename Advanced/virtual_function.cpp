// Virtual Functions in C++
// Demonstrates runtime polymorphism using virtual functions

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animal;

    Dog d;
    Cat c;

    animal = &d;
    animal->sound();  // Calls Dog's sound

    animal = &c;
    animal->sound();  // Calls Cat's sound

    return 0;
}
