// Basic Class and Object in C++
// This program demonstrates creating a simple class with a function to display student details.

#include <iostream>
using namespace std;

// Class definition
class Student {
public:
    string name;
    int roll;

    // Member function to input student details
    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll;
    }

    // Member function to display details
    void display() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }
};

int main() {
    Student s;

    s.input();    // Call input function
    cin.ignore(); // To consume newline if needed
    s.display();  // Call display function

    return 0;
}
