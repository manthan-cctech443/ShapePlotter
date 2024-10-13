#include "Line.h"
#include <iostream>
using namespace std;

// Constructor for the Line class
Line::Line() {}

// Destructor for the Line class
Line::~Line() {}

// Function to input the endpoints of the line
void Line::input() {
    Point p1, p2;  // Points to store the endpoints of the line
    cout << "Enter the first point (x y) of the line: ";
    cin >> p1.x >> p1.y;  // Input coordinates for the first point
    
    cout << "Enter the second point (x y) of the line: ";
    cin >> p2.x >> p2.y;  // Input coordinates for the second point

    // Store the endpoints as vertices of the line
    storeVertices({p1, p2});
}

// Function to display the line's endpoints
void Line::display() const {
    cout << "Line: ";
    for (const auto& vertex : vertices) {
        vertex.display();  // Display each vertex
        cout << " ";  // Space between points
    }
    cout << endl;  // New line after displaying all points
}

// Function to calculate and return the points defining the line
vector<Point> Line::calculatePoints() const {
    return vertices;  // Return the stored vertices
}

