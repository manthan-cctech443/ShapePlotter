#pragma once  

#include "Geometry.h"
using namespace std;

// Line class inherits from Geometry
class Line : public Geometry {
public:
    // Constructor
    Line();
    
    // Destructor
    ~Line();

    // Override the input function from Geometry to input line-specific data
    void input() override;

    // Override the display function to show line details
    void display() const override;

    // Function to calculate points on the line based on its vertices
    vector<Point> calculatePoints() const; 
};
