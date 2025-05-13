// Operator Overloading in C++
// Demonstrates overloading of '+' operator for a custom class

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    // Overload '+' operator
    Complex operator + (const Complex &obj) {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.6, 4.5);
    Complex result = c1 + c2;

    cout << "Sum of complex numbers: ";
    result.display();

    return 0;
}
