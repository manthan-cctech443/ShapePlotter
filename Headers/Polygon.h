#pragma once  

#include "Geometry.h"
#include <vector>
using namespace std;

// Polygon class inherits from Geometry and represents a polygon with a specific number of sides
class Polygon : public Geometry {
private:
    int numSides;  // Number of sides in the polygon

public:
    // Constructor
    Polygon();
    
    // Destructor
    ~Polygon();

    // Override the input function to input polygon-specific data
    void input() override;

    // Override the display function to show polygon details
    void display() const override;

    // Function to calculate points based on the number of sides
    vector<Point> calculatePoints() const; 
};

