// Check if a String is a Palindrome in C++
// This program checks if the entered string is a palindrome.

#include <iostream>
#include <cstring>  // For strlen()

using namespace std;

int main() {
    char str[100];
    bool isPalindrome = true;

    // Taking input
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = strlen(str);

    // Comparing characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    // Output result
    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
