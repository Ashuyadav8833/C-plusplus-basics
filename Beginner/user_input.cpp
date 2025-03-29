// User Input in C++
// This program demonstrates taking input from the user and displaying it.

#include <iostream>  // Standard input-output stream library

int main() {
    std::string name;  // Variable to store user input

    // Asking for user input
    std::cout << "Enter your name: ";
    std::cin >> name;  // Taking input from user

    // Displaying the input
    std::cout << "Hello, " << name << "! Welcome to C++ programming." << std::endl;

    return 0;  // Returning 0 indicates successful execution
}
