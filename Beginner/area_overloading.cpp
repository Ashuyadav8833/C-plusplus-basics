// Function Overloading Example: Calculate Area
// This program demonstrates function overloading to calculate the area of a square, rectangle, and circle.

#include <iostream>  // Standard input-output stream library
#include <cmath>     // For mathematical functions like M_PI

// Function to calculate the area of a square
double area(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double area(int radius) {
    return M_PI * radius * radius;
}

int main() {
    // Displaying different areas
    std::cout << "Area of square (side = 4): " << area(4) << std::endl;
    std::cout << "Area of rectangle (length = 5, width = 3): " << area(5, 3) << std::endl;
    std::cout << "Area of circle (radius = 6): " << area(6) << std::endl;

    return 0;  // Returning 0 indicates successful execution
}
