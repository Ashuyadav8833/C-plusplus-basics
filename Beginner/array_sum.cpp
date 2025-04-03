// Sum of Array Elements in C++
// This program calculates the sum of all elements in an array.

#include <iostream>  // Standard input-output stream library

int main() {
    int size;  // Variable to store the array size

    // Taking the array size input
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    // Checking if input is valid
    if (size <= 0) {
        std::cout << "Invalid array size!" << std::endl;
        return 1;  // Exit with an error code
    }

    int arr[size];  // Array declaration
    int sum = 0;  // Variable to store the sum

    // Taking array elements input
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
        sum += arr[i];  // Adding each element to sum
    }

    // Displaying the result
    std::cout << "The sum of all elements in the array is: " << sum << std::endl;

    return 0;  // Returning 0 indicates successful execution
}
