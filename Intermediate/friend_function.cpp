// Friend Function in C++
// This program demonstrates how a friend function can access private members of a class.

#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 0;
    }

    // Friend function declaration
    friend void setLength(Box &b, int l);
};

// Friend function definition
void setLength(Box &b, int l) {
    b.length = l;
    cout << "Length is set to: " << b.length << endl;
}

int main() {
    Box b1;
    setLength(b1, 25);  // Accessing private data using friend function

    return 0;
}
