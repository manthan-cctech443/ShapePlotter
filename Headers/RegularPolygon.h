#pragma once  

#include "Geometry.h"
#include <vector>
using namespace std;

// RegularPolygon class inherits from Geometry and represents a regular polygon
class RegularPolygon : public Geometry {
private:
    int numSides;   // Number of sides in the regular polygon
    double side;    // Length of each side

public:
    // Constructor
    RegularPolygon();
    
    // Destructor
    ~RegularPolygon();

    // Override the input function to input regular polygon-specific data
    void input() override;

    // Override the display function to show regular polygon details
    void display() const override;

    // Function to calculate points based on the number of sides and side length
    vector<Point> calculatePoints() const; 
};

