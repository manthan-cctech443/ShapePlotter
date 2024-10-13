#include "C:\Users\HP\Desktop\ShapePlotter\ShapePlotter\Headers\Triangle.h"
#include <iostream>
using namespace std;

//Constructor for Triangle class
Triangle::Triangle() {}

//Destructor for Triangle class
Triangle::~Triangle() {}

// Input the vertices of the triangle from the user
void Triangle::input() {
    Point p1, p2, p3; // Declare points for the triangle vertices
    cout << "Enter the first point (x y) of the triangle: ";
    cin >> p1.x >> p1.y;
    
    cout << "Enter the second point (x y) of the triangle: ";
    cin >> p2.x >> p2.y;
    
    cout << "Enter the third point (x y) of the triangle: ";
    cin >> p3.x >> p3.y;

    // Store the vertices of the triangle, including the first point again to close the shape
    storeVertices({p1, p2, p3, p1}); 
}

// Display the vertices of the triangle
void Triangle::display() const {
    cout << "Triangle: ";
    for (const auto& vertex : vertices) {
        vertex.display(); // Display each vertex
        cout << " ";
    }
    cout << std::endl;
}

// Calculate the points of the triangle (returns the vertices)
vector<Point> Triangle::calculatePoints() const {
    return vertices; // Return the stored vertices as the triangle's points
}
