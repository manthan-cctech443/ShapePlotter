#include "Circle.h"
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846  // Define constant for pi
using namespace std;

// Constructor initializes the radius to 0
Circle::Circle() : radius(0) {}

// Destructor
Circle::~Circle() {}

// Function to input the circle's center and radius
void Circle::input() {
    Point center;  // Create a Point object for the center
    cout << "Enter the center point (x y) of the circle: ";
    cin >> center.x >> center.y;  // Input center coordinates
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;  // Input radius

    // Store the center point as a vertex
    storeVertices({center});
}

// Function to display the circle's details
void Circle::display() const {
    cout << "Circle: Center ";
    vertices[0].display();  // Display center point
    cout << ", Radius: " << radius << endl;  // Display radius
}

// Function to calculate points on the circle's circumference
vector<Point> Circle::calculatePoints() const {
    vector<Point> points;  // Vector to hold calculated points
    int numPoints = 100;  // Number of points to calculate
    for (int i = 0; i < numPoints; ++i) {
        double angle = 2 * M_PI * i / numPoints;  // Calculate angle
        double x = vertices[0].x + radius * cos(angle);  // Calculate x coordinate
        double y = vertices[0].y + radius * sin(angle);  // Calculate y coordinate
        points.push_back(Point(x, y));  // Add point to vector
    }
    points.push_back(points[0]);  // Ensure the last point connects to the first
    return points;  // Return the calculated points
}
