#include "Polygon.h"
#include <iostream>
using namespace std;

// Constructor for the Polygon class
Polygon::Polygon() : numSides(0) {}

// Destructor for the Polygon class
Polygon::~Polygon() {}

// Function to input the vertices of the polygon
void Polygon::input() {
    cout << "Enter the number of sides of the polygon: ";
    cin >> numSides;  // User input for the number of sides

    // Check if the number of sides is valid for a polygon
    if (numSides < 3) {
        cout << "Invalid polygon. Number of sides must be at least 3." << endl;
        return;  // Exit if the number of sides is invalid
    }

    vector<Point> points;  // Vector to store the vertices of the polygon
    for (int i = 0; i < numSides; ++i) {
        Point p;  // Create a Point object for each vertex
        cout << "Enter vertex " << i + 1 << " (x y): ";
        cin >> p.x >> p.y;  // Input coordinates for the vertex
        points.push_back(p);  // Add the vertex to the points vector
    }
    points.push_back(points[0]);  // Close the polygon by adding the first vertex

    storeVertices(points);  // Store the vertices in the base class
}

// Function to display the polygon's vertices
void Polygon::display() const {
    cout << "Polygon with " << numSides << " sides: ";
    for (const auto& vertex : vertices) {
        vertex.display();  // Display each vertex
        cout << " ";
    }
    cout << endl;  
}

// Function to calculate and return the points of the polygon
vector<Point> Polygon::calculatePoints() const {
    return vertices;  // Return the stored vertices
}
