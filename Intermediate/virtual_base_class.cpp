// Virtual Base Class in C++
// Solves the diamond problem using virtual inheritance

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A function called" << endl;
    }
};

// B and C virtually inherit from A
class B : virtual public A {
public:
    void displayB() {
        cout << "Class B function called" << endl;
    }
};

class C : virtual public A {
public:
    void displayC() {
        cout << "Class C function called" << endl;
    }
};

// D inherits from B and C
class D : public B, public C {
public:
    void displayD() {
        cout << "Class D function called" << endl;
    }
};

int main() {
    D obj;
    obj.show();       // Only one copy of A's function is inherited
    obj.displayB();
    obj.displayC();
    obj.displayD();

    return 0;
}
