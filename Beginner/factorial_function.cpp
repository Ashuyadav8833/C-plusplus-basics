// Factorial Calculation using Functions in C++
// This program calculates the factorial of a number using a function.

#include <iostream>  // Standard input-output stream library

// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: 0! = 1! = 1
    }
    return n * factorial(n - 1);  // Recursive call
}

int main() {
    int number;  // Variable to store user input

    // Taking input from the user
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Checking if input is valid
    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers!" << std::endl;
        return 1;  // Exit with an error code
    }

    // Calling the factorial function and displaying the result
    std::cout << "Factorial of " << number << " is: " << factorial(number) << std::endl;

    return 0;  // Returning 0 indicates successful execution
}
