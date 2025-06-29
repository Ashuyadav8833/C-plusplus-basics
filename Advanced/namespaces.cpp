// Namespaces in C++
// Demonstrates how to use and define namespaces to avoid name conflicts

#include <iostream>
using namespace std;

// Define first namespace
namespace First {
    void display() {
        cout << "Inside First namespace" << endl;
    }
}

// Define second namespace
namespace Second {
    void display() {
        cout << "Inside Second namespace" << endl;
    }
}

// Define a nested namespace
namespace Outer {
    namespace Inner {
        void show() {
            cout << "Inside Outer::Inner namespace" << endl;
        }
    }
}

int main() {
    First::display();       // Call function from First namespace
    Second::display();      // Call function from Second namespace
    Outer::Inner::show();   // Call function from nested namespace

    return 0;
}
