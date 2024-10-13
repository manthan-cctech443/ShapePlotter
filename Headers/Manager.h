#pragma once 

// Include all necessary shape headers
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Polygon.h"
#include "Line.h"
#include "RegularPolygon.h"
#include "Star.h"
#include "Writer.h"

// Manager class is responsible for handling shape operations
class Manager {
public:
    // Constructor
    Manager();

    // Destructor
    ~Manager();

    // Function to allow the user to choose a shape and perform actions
    void chooseShape(); 
};

