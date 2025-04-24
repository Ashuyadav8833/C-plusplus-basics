// File Handling in C++
// Demonstrates writing to and reading from a file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string data;

    // Writing to a file
    ofstream outFile("sample.txt");  // Creates or opens file
    if (!outFile) {
        cout << "File creation failed!" << endl;
        return 1;
    }

    outFile << "Hello, Ashu!" << endl;
    outFile << "Welcome to File Handling in C++." << endl;
    outFile.close();  // Close the file after writing

    // Reading from the file
    ifstream inFile("sample.txt");
    if (!inFile) {
        cout << "File opening failed!" << endl;
        return 1;
    }

    cout << "Reading content from file:" << endl;
    while (getline(inFile, data)) {
        cout << data << endl;
    }
    inFile.close();  // Close the file after reading

    return 0;
}
