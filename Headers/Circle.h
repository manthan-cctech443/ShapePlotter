#pragma once  

#include "Geometry.h"
#include <vector>
using namespace std;

// Circle class inherits from Geometry
class Circle : public Geometry {
private:
    double radius;  // Radius of the circle

public:
    // Constructor
    Circle();
    
    // Destructor
    ~Circle();

    // Override the input function from Geometry to input circle-specific data
    void input() override;
    
    // Override the display function to show circle details
    void display() const override; 
    
    // Function to calculate points on the circle based on the radius
    vector<Point> calculatePoints() const;
};
