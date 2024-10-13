#include "Square.h"
#include <iostream>
using namespace std;

// Constructor for the Square class
Square::Square() {}

// Destructor for the Square class
Square::~Square() {}

// Input the details for the square
void Square::input() {
    Point bottomLeft;  // Bottom left point of the square
    double sideLength; // Length of the side of the square
    
    // Prompt user for the bottom left point
    cout << "Enter the bottom left point (x y) of the square: ";
    cin >> bottomLeft.x >> bottomLeft.y;
    
    // Prompt user for the side length
    cout << "Enter the side length of the square: ";
    cin >> sideLength;

    // Store the vertices of the square
    storeVertices({
        bottomLeft,  // Bottom left
        Point(bottomLeft.x + sideLength, bottomLeft.y),  // Bottom right
        Point(bottomLeft.x + sideLength, bottomLeft.y + sideLength),  // Top right
        Point(bottomLeft.x, bottomLeft.y + sideLength),  // Top left
        bottomLeft,  // Closing the square by returning to the bottom left
    });
}

// Display the vertices of the square
void Square::display() const {
    cout << "Square: ";
    for (const auto& vertex : vertices) {
        vertex.display();  // Display each vertex
        cout << " ";
    }
    cout << endl;
}

// Calculate and return the vertices of the square
vector<Point> Square::calculatePoints() const {
    return vertices; // Return the stored vertices
}
