#pragma once  

// Point class represents a 2D point with x and y coordinates
class Point {
public:
    double x, y;  // Coordinates of the point

    // Constructor with default values for x and y
    Point(double x = 0, double y = 0);

    // Destructor
    ~Point();

    // Function to display the coordinates of the point
    void display() const;
};
