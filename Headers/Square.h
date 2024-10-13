#pragma once  

#include "Geometry.h"
using namespace std;

// Square class inherits from Geometry and represents a square shape
class Square : public Geometry {
public:
    // Constructor
    Square();
    
    // Destructor
    ~Square();

    // Override the input function to input square-specific data
    void input() override;

    // Override the display function to show square details
    void display() const override;

    // Function to calculate points based on square dimensions
    vector<Point> calculatePoints() const; 
};

