// STL in C++
// Demonstrates usage of vector, set, and map from the Standard Template Library

#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main() {
    // VECTOR - Dynamic array
    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);
    cout << "Vector contents: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    // SET - Stores unique elements in sorted order
    set<int> s = {3, 1, 4, 2, 5, 3};  // Duplicate 3 is ignored
    cout << "Set contents: ";
    for (int num : s) {
        cout << num << " ";
    }
    cout << endl;

    // MAP - Key-value pair
    map<string, int> m;
    m["apple"] = 3;
    m["banana"] = 5;
    m["orange"] = 2;

    cout << "Map contents:" << endl;
    for (auto pair : m) {
        cout << pair.first << " => " << pair.second << endl;
    }

    return 0;
}
