// Printing First N Natural Numbers in C++
// This program prints natural numbers using a for loop.

#include <iostream>  // Standard input-output stream library

int main() {
    int n;  // Variable to store user input

    // Taking input from the user
    std::cout << "Enter a positive number: ";
    std::cin >> n;

    // Checking if input is valid
    if (n <= 0) {
        std::cout << "Please enter a positive number!" << std::endl;
        return 1;  // Exit with an error code
    }

    // Printing natural numbers using a for loop
    std::cout << "First " << n << " natural numbers: ";
    for (int i = 1; i <= n; i++) {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;  // Returning 0 indicates successful execution
}
