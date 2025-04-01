// Ensuring Positive Number Input using do-while Loop in C++
// This program keeps asking for input until the user enters a positive number.

#include <iostream>  // Standard input-output stream library

int main() {
    int number;  // Variable to store user input

    // Using do-while loop to ensure at least one execution
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;

        if (number <= 0) {
            std::cout << "Invalid input! Please enter a positive number." << std::endl;
        }
    } while (number <= 0);  // Repeats if the number is not positive

    // Displaying the valid input
    std::cout << "You entered a valid positive number: " << number << std::endl;

    return 0;  // Returning 0 indicates successful execution
}
