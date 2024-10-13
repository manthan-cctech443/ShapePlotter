#pragma once  
#include "Geometry.h"
#include <vector>
using namespace std;

// Star class inherits from Geometry and represents a star shape
class Star : public Geometry {
private:
    int numSides;  // Number of sides in the star
    int side;      // Length of each side

public:
    // Constructor
    Star();
    
    // Destructor
    ~Star();

    // Override the input function to input star-specific data
    void input() override;

    // Override the display function to show star details
    void display() const override;

    // Function to calculate points based on the number of sides and side length
    vector<Point> calculatePoints() const; 
};

