// Constructor in C++
// This program demonstrates the use of a default constructor.

#include <iostream>
using namespace std;

// Class with a constructor
class Car {
public:
    string brand;
    int year;

    // Constructor: called automatically when object is created
    Car() {
        brand = "Toyota";
        year = 2020;
    }

    // Function to display values
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car c1;  // Constructor is called automatically
    c1.display();  // Display car info

    return 0;
}
