// Function Template in C++
// Demonstrates writing a generic function to find the maximum of two values

#include <iostream>
using namespace std;

// Template definition
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 10 and 20: " << getMax(10, 20) << endl;
    cout << "Max of 4.5 and 2.3: " << getMax(4.5, 2.3) << endl;
    cout << "Max of 'x' and 'a': " << getMax('x', 'a') << endl;

    return 0;
}
