#include "RegularPolygon.h"
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std; 

// Constructor for the RegularPolygon class
RegularPolygon::RegularPolygon() : numSides(0), side(0) {}

// Destructor for the RegularPolygon class
RegularPolygon::~RegularPolygon() {}

// Function to input the number of sides and side length of the polygon
void RegularPolygon::input() {
    cout << "Enter the number of sides of the polygon: ";
    cin >> numSides;  // Input for the number of sides
    cout << "Enter the length of the side of the polygon: ";
    cin >> side;  // Input for the length of each side

    // Validate the number of sides and side length
    if (numSides < 3 || side <= 0) {
        cout << "Invalid polygon. Number of sides must be at least 3 and side length must be positive." << endl;
        return;  // Return if invalid input
    }
}

// Function to display information about the regular polygon
void RegularPolygon::display() const {
    cout << "Regular Polygon with " << numSides << " sides with center at the origin." << endl;
}

// Function to calculate and return the points of the regular polygon
vector<Point> RegularPolygon::calculatePoints() const {
    vector<Point> points;  // Vector to hold the vertices of the polygon
    double circumradius = side / (2 * sin(M_PI / numSides));  // Calculate the circumradius
    double angle = M_PI / 2;  // Start angle (facing upwards)
    double theta = 360.0 / numSides;  // Angle between vertices in degrees
    theta = theta * M_PI / 180;  // Convert to radians

    // Calculate the positions of each vertex
    for (int i = 0; i < numSides; i++) { 
        double x = circumradius * cos(angle);  // Calculate x coordinate
        double y = circumradius * sin(angle);  // Calculate y coordinate
        points.push_back(Point(x, y));  // Add the point to the vector
        angle += theta;  // Increment the angle for the next vertex
    }
    points.push_back(points[0]);  // Close the polygon by adding the first vertex again
    return points;  // Return the calculated points
}
