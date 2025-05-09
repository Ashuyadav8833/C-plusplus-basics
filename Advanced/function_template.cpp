// Function Template in C++
// Demonstrates generic functions that work with different data types

#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add<int>(5, 10) << endl;
    cout << "Sum of doubles: " << add<double>(5.5, 10.2) << endl;
    cout << "Sum of characters (ASCII addition): " << add<char>('A', 'B') << endl;

    return 0;
}
