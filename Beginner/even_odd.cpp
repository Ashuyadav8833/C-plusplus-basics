// Even or Odd Number Check in C++
// This program checks whether a number is even or odd using if-else.

#include <iostream>  // Standard input-output stream library

int main() {
    int number;  // Variable to store user input

    // Taking input from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Checking if the number is even or odd
    if (number % 2 == 0) {
        std::cout << number << " is an even number." << std::endl;
    } else {
        std::cout << number << " is an odd number." << std::endl;
    }

    return 0;  // Returning 0 indicates successful execution
}
