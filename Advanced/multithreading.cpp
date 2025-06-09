// Multithreading in C++
// Demonstrates basic usage of std::thread

#include <iostream>
#include <thread>

using namespace std;

// Function to be run in a thread
void printNumbers(const string& name) {
    for (int i = 1; i <= 5; ++i) {
        cout << name << " prints: " << i << endl;
    }
}

int main() {
    // Creating threads
    thread t1(printNumbers, "Thread 1");
    thread t2(printNumbers, "Thread 2");

    // Wait for threads to complete
    t1.join();
    t2.join();

    cout << "Main thread completed." << endl;

    return 0;
}
