// Types of Inheritance in C++
// Demonstrates multiple types of inheritance

#include <iostream>
using namespace std;

// Single Inheritance
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B (Single Inheritance from A)" << endl;
    }
};

// Multiple Inheritance
class C {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public A, public C {
public:
    void showD() {
        cout << "Class D (Multiple Inheritance from A and C)" << endl;
    }
};

// Multilevel Inheritance
class E : public B {
public:
    void showE() {
        cout << "Class E (Multilevel Inheritance from B -> A)" << endl;
    }
};

int main() {
    cout << "Single Inheritance:" << endl;
    B objB;
    objB.showA();
    objB.showB();

    cout << "\nMultiple Inheritance:" << endl;
    D objD;
    objD.showA();
    objD.showC();
    objD.showD();

    cout << "\nMultilevel Inheritance:" << endl;
    E objE;
    objE.showA();
    objE.showB();
    objE.showE();

    return 0;
}
