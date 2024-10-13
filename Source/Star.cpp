#include "Star.h"
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std; 

//Constructor for Star Class
Star::Star() : numSides(0) {}

//Destructor for Star Class
Star::~Star() {}

// Input the number of points for the star
void Star::input() {
    cout << "Enter the number of points to make a star: ";
    cin >> numSides;

    // Set a default value for side if not provided by the user
    side = 5; // Adjust as needed or prompt user for input
    
    // Validate input for the number of points
    if (numSides < 3 || side <= 0) {
        cout << "Invalid star. The number of points must be at least 3." << endl;
        return;
    }
}

// Display the details of the star
void Star::display() const {
    cout << "Star with " << numSides << " points centered at the origin." << endl;
}

// Calculate the points of the star based on the number of points and side length
vector<Point> Star::calculatePoints() const {
    vector<Point> points;
    
    // Calculate the circumradius based on the side length and number of points
    double circumradius = side / (2 * sin(M_PI / numSides));
    
    double angle = 0.0; // Initialize angle for point calculation
    double theta = ((numSides - 2) * 180) / numSides; // Angle for each point in radians
    theta = theta * M_PI / 180; // Convert to radians

    // Loop to calculate the coordinates of each point of the star
    for (int i = 0; i < numSides; ++i) {
        double x = circumradius * cos(angle); // X-coordinate
        double y = circumradius * sin(angle); // Y-coordinate
        points.push_back(Point(x, y)); // Add point to the vector
        angle += theta; // Increment angle for the next point
    }
    
    points.push_back(points[0]); // Close the star shape by returning to the first point
    return points;
}
