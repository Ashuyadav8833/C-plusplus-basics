// Friend Function in C++
// Demonstrates how a non-member function can access private data of a class

#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() : length(0) {}

    void setLength(int l) {
        length = l;
    }

    // Declare friend function
    friend void printLength(Box b);
};

// Friend function definition
void printLength(Box b) {
    // Accessing private data of class
    cout << "Length of the box is: " << b.length << endl;
}

int main() {
    Box b;
    b.setLength(15);

    // Call friend function
    printLength(b);

    return 0;
}
