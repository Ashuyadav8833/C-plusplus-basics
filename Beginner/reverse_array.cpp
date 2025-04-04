// Reverse an Array in C++
// This program takes an array as input and prints it in reverse order.

#include <iostream>  // Standard input-output stream library

int main() {
    int size;

    // Taking input for array size
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    // Checking for valid size
    if (size <= 0) {
        std::cout << "Invalid array size!" << std::endl;
        return 1;
    }

    int arr[size];

    // Input array elements
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Displaying array in reverse
    std::cout << "Array in reverse order: ";
    for (int i = size - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
