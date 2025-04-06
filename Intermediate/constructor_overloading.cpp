// Constructor Overloading in C++
// This program demonstrates multiple constructors in a class.

#include <iostream>
using namespace std;

// Class with overloaded constructors
class Rectangle {
    int length, breadth;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Function to display area
    void displayArea() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;           // Calls default constructor
    Rectangle r2(5, 10);    // Calls parameterized constructor

    cout << "Rectangle 1 (Default):" << endl;
    r1.displayArea();

    cout << "\nRectangle 2 (Parameterized):" << endl;
    r2.displayArea();

    return 0;
}
