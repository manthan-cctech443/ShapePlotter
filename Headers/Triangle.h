#pragma once  

#include "Geometry.h"
using namespace std;  

// Triangle class inherits from Geometry and represents a triangle shape
class Triangle : public Geometry {
public:
    // Constructor
    Triangle();
    
    // Destructor
    ~Triangle();

    // Override the input function to input triangle-specific data
    void input() override;

    // Override the display function to show triangle details
    void display() const override;

    // Function to calculate points based on triangle dimensions
    vector<Point> calculatePoints() const; 
};

