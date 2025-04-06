// Destructor in C++
// This program demonstrates how a destructor works.

#include <iostream>
using namespace std;

// Class with constructor and destructor
class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called!" << endl;
    }

    void showMessage() {
        cout << "Inside the showMessage() function." << endl;
    }
};

int main() {
    Demo obj;  // Constructor is automatically called
    obj.showMessage();  // Function call

    // Destructor will be called automatically when 'obj' goes out of scope
    return 0;
}
