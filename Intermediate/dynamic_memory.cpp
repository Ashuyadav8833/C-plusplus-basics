// Dynamic Memory Allocation in C++
// Demonstrates use of new and delete operators

#include <iostream>
using namespace std;

int main() {
    // Dynamically allocating memory for an integer
    int* ptr = new int;
    *ptr = 50;
    cout << "Value at ptr: " << *ptr << endl;

    // De-allocating memory
    delete ptr;

    // Dynamically allocating memory for an array
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // De-allocating array memory
    delete[] arr;

    return 0;
}
