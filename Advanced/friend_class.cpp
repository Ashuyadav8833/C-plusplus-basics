// Friend Class in C++
// Demonstrates how one class can access private members of another class

#include <iostream>
using namespace std;

class Box;  // Forward declaration

class Display {
public:
    void showLength(Box b);  // Function to display Box's length
};

class Box {
private:
    int length;

public:
    Box(int l) : length(l) {}

    // Declare Display as friend class
    friend class Display;
};

// Member function of Display class
void Display::showLength(Box b) {
    cout << "Length of the box is: " << b.length << endl;
}

int main() {
    Box b(20);
    Display d;
    d.showLength(b);

    return 0;
}
