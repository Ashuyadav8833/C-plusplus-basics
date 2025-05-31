// Templates in C++
// Demonstrates function and class templates

#include <iostream>
using namespace std;

// Function Template
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// Class Template
template <typename T>
class Calculator {
private:
    T num1, num2;
public:
    Calculator(T a, T b) : num1(a), num2(b) {}

    void displayResult() {
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
    }
};

int main() {
    // Function Template usage
    cout << "Max (int): " << maximum<int>(10, 20) << endl;
    cout << "Max (double): " << maximum<double>(5.5, 2.3) << endl;

    // Class Template usage
    Calculator<int> calc1(10, 5);
    calc1.displayResult();

    Calculator<double> calc2(10.5, 2.5);
    calc2.displayResult();

    return 0;
}
