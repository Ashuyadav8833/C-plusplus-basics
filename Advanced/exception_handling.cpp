// Exception Handling in C++
// Demonstrates try, catch, and throw for runtime error handling

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denominator: ";
    cin >> b;

    try {
        if (b == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }
        cout << "Result: " << a / b << endl;
    }
    catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
