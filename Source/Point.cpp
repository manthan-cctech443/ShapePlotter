#include "Point.h"
#include <iostream>
using namespace std;

// Constructor for the Point class
Point::Point(double x, double y) : x(x), y(y) {}

// Destructor for the Point class
Point::~Point() {}

// Function to display the coordinates of the point
void Point::display() const {
    cout << "(" << x << ", " << y << ")";  // Output the point in (x, y) format
}
