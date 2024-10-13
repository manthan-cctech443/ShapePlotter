#pragma once  

#include "Geometry.h"
using namespace std;

// Rectangle class inherits from Geometry and represents a rectangle shape
class Rectangle : public Geometry {
public:
    // Constructor
    Rectangle();
    
    // Destructor
    ~Rectangle();

    // Override the input function to input rectangle-specific data
    void input() override;

    // Override the display function to show rectangle details
    void display() const override;

    // Function to calculate points based on rectangle dimensions
    vector<Point> calculatePoints() const; 
};

