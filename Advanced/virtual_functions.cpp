// Virtual Functions in C++
// Demonstrates runtime polymorphism using virtual functions

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    Cat c;

    a = &d;
    a->speak();  // Calls Dog's version

    a = &c;
    a->speak();  // Calls Cat's version

    return 0;
}
