// Operator Overloading in C++
// This program demonstrates how to overload the '+' operator.

#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload '+' operator
    Complex operator + (const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.3, 3.4), c2(1.2, 4.1);
    Complex result = c1 + c2;  // '+' operator overloaded

    cout << "Result of addition: ";
    result.display();

    return 0;
}
