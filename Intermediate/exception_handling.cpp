// Exception Handling in C++
// Demonstrates use of try, catch, and throw for runtime error handling

#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division by zero error!");
    }
    return a / b;
}

int main() {
    int x = 10, y = 0;

    try {
        int result = divide(x, y);
        cout << "Result: " << result << endl;
    }
    catch (runtime_error &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
