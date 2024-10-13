#pragma once 

#include <vector>
#include "Point.h"
using namespace std;

// Abstract base class Geometry to represent various geometric shapes
class Geometry {
protected:
    vector<Point> vertices;  // Stores vertices of the shape

public:
    // Pure virtual function for input, must be overridden by derived classes
    virtual void input() = 0;

    // Pure virtual function for display, must be overridden by derived classes
    virtual void display() const = 0;

    // Returns the vertices of the shape
    virtual vector<Point> getVertices() const;

    // Stores the provided vertices
    void storeVertices(const vector<Point>& points);

    // Destructor to ensure proper cleanup of derived classes
    ~Geometry() {}
};
