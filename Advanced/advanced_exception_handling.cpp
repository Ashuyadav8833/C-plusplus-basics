// Advanced Exception Handling in C++
// Demonstrates multiple catch blocks and user-defined exception class

#include <iostream>
#include <stdexcept>  // For standard exceptions

using namespace std;

// User-defined exception class
class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "Custom Exception Occurred!";
    }
};

int main() {
    int choice;

    cout << "Enter 1 for divide by zero, 2 for custom error: ";
    cin >> choice;

    try {
        if (choice == 1) {
            int a = 10, b = 0;
            if (b == 0) throw runtime_error("Division by zero!");
            cout << "Result: " << a / b << endl;
        }
        else if (choice == 2) {
            throw MyException();
        }
        else {
            throw invalid_argument("Invalid input!");
        }
    }
    catch (const runtime_error& e) {
        cout << "Runtime Error: " << e.what() << endl;
    }
    catch (const MyException& e) {
        cout << "Custom Exception: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "General Exception: " << e.what() << endl;
    }

    return 0;
}
