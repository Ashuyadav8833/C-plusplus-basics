// Find the Length of a String without using built-in functions
// This program calculates the length of a string entered by the user.

#include <iostream>  // Standard input-output
using namespace std;

int main() {
    char str[100];  // Character array to store the string
    int length = 0;

    // Taking input from user
    cout << "Enter a string: ";
    cin.getline(str, 100);  // Reads a line of text including spaces

    // Calculating length manually
    while (str[length] != '\0') {
        length++;
    }

    // Displaying the result
    cout << "The length of the string is: " << length << endl;

    return 0;
}
