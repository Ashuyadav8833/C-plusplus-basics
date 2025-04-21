// Class Template in C++
// Demonstrates how to create a generic class using templates

#include <iostream>
using namespace std;

// Template class definition
template <class T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    void displayResult() {
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        cout << "Division: " << num1 / num2 << endl;
    }
};

int main() {
    cout << "--- Integer Calculator ---" << endl;
    Calculator<int> intCalc(10, 5);
    intCalc.displayResult();

    cout << "\n--- Float Calculator ---" << endl;
    Calculator<float> floatCalc(10.5, 5.5);
    floatCalc.displayResult();

    return 0;
}
