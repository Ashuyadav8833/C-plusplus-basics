// Parameterized Constructor in C++
// This program shows how to pass values to a constructor.

#include <iostream>
using namespace std;

// Class with parameterized constructor
class Book {
public:
    string title;
    int pages;

    // Parameterized constructor
    Book(string t, int p) {
        title = t;
        pages = p;
    }

    // Display function
    void display() {
        cout << "Title: " << title << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main() {
    // Creating object with values
    Book b1("C++ Programming", 350);
    Book b2("Data Structures", 450);

    // Display details
    cout << "Book 1 Details:" << endl;
    b1.display();

    cout << "\nBook 2 Details:" << endl;
    b2.display();

    return 0;
}
