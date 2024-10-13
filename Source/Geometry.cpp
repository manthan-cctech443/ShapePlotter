#include "Geometry.h"
using namespace std;

// Function to store vertices in the geometry
void Geometry::storeVertices(const vector<Point>& points) {
    vertices = points;  // Assign the input points to the member variable
}

// Function to retrieve the stored vertices
vector<Point> Geometry::getVertices() const {
    return vertices;  // Return the vertices
}

