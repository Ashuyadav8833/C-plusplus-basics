// Static Members in C++
// This program demonstrates the use of static data and static member function.

#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member

public:
    Counter() {
        count++;
    }

    // Static member function
    static void showCount() {
        cout << "Number of objects created: " << count << endl;
    }
};

// Definition and initialization of static member
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;

    // Calling static function using class name
    Counter::showCount();

    return 0;
}
