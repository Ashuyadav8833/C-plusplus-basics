// Sum of Digits in C++
// This program calculates the sum of digits of a number using a while loop.

#include <iostream>  // Standard input-output stream library

int main() {
    int number, sum = 0;  // Variables to store user input and sum

    // Taking input from the user
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Checking if input is valid
    if (number < 0) {
        std::cout << "Please enter a positive number!" << std::endl;
        return 1;  // Exit with an error code
    }

    int temp = number;  // Storing the original number

    // Using while loop to calculate the sum of digits
    while (temp > 0) {
        sum += temp % 10;  // Extract last digit and add to sum
        temp /= 10;  // Remove last digit
    }

    // Displaying the result
    std::cout << "The sum of digits of " << number << " is: " << sum << std::endl;

    return 0;  // Returning 0 indicates successful execution
}
