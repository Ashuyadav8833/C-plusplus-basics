// Basic Arithmetic Operations in C++
// This program performs addition, subtraction, multiplication, and division on two numbers.

#include <iostream>  // Standard input-output stream library

int main() {
    double num1, num2;  // Variables to store user input

    // Taking input from the user
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Performing arithmetic operations
    std::cout << "\nResults:\n";
    std::cout << "Addition: " << (num1 + num2) << std::endl;
    std::cout << "Subtraction: " << (num1 - num2) << std::endl;
    std::cout << "Multiplication: " << (num1 * num2) << std::endl;

    // Checking if division is possible (to avoid division by zero)
    if (num2 != 0) {
        std::cout << "Division: " << (num1 / num2) << std::endl;
    } else {
        std::cout << "Division by zero is not allowed!" << std::endl;
    }

    return 0;  // Returning 0 indicates successful execution
}
