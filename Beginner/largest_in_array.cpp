// Find the Largest Element in an Array in C++
// This program finds the largest number in an array.

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

    // Taking array elements input
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Finding the largest element
    int largest = arr[0];  // Assume first element is largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Displaying the result
    std::cout << "The largest element in the array is: " << largest << std::endl;

    return 0;  // Returning 0 indicates successful execution
}
