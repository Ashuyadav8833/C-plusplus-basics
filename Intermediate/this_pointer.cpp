// "this" Pointer in C++
// Demonstrates the use of "this" pointer inside a class

#include <iostream>
using namespace std;

class Example {
private:
    int value;

public:
    Example(int value) {
        this->value = value;  // "this" pointer distinguishes between local and instance variable
    }

    void showValue() {
        cout << "Value is: " << this->value << endl;
    }
};

int main() {
    Example obj(100);
    obj.showValue();

    return 0;
}
