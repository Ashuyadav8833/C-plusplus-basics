// Class Template in C++
// Demonstrates how to create generic classes

#include <iostream>
using namespace std;

// Class template
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
    cout << "Integer calculation:" << endl;
    Calculator<int> intCalc(20, 10);
    intCalc.displayResult();

    cout << "\nFloat calculation:" << endl;
    Calculator<float> floatCalc(5.5, 2.2);
    floatCalc.displayResult();

    return 0;
}
