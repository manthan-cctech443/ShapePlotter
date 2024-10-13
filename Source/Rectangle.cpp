#include "Rectangle.h"
#include <iostream>
using namespace std;

// Constructor for the Rectangle class
Rectangle::Rectangle() {}

// Destructor for the Rectangle class
Rectangle::~Rectangle() {}

// Function to input the corner points of the rectangle
void Rectangle::input() {
    Point bottomLeft, topRight;  // Declare points for bottom left and top right corners
    cout << "Enter the bottom left point (x y) of the rectangle: ";
    cin >> bottomLeft.x >> bottomLeft.y;  // Input for the bottom left corner

    cout << "Enter the top right point (x y) of the rectangle: ";
    cin >> topRight.x >> topRight.y;  // Input for the top right corner

    // Define the rectangle's vertices based on the corner points
    vector<Point> points = {
        bottomLeft,                          // Bottom left corner
        Point(topRight.x, bottomLeft.y),    // Bottom right corner
        topRight,                            // Top right corner
        Point(bottomLeft.x, topRight.y),    // Top left corner
        bottomLeft                           // Close the rectangle by adding the first vertex
    };

    storeVertices(points);  // Store the vertices in the base class
}

// Function to display the rectangle's vertices
void Rectangle::display() const {
    cout << "Rectangle vertices: ";
    for (const auto& vertex : vertices) {
        vertex.display();  // Display each vertex
        cout << " ";
    }
    cout << endl; 
}

// Function to calculate and return the points of the rectangle
vector<Point> Rectangle::calculatePoints() const {
    return vertices;  // Return the stored vertices
}
