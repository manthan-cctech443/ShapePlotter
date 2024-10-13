#pragma once  

#include "Geometry.h"
#include <string>
using namespace std;  

// Writer class responsible for writing point data to a file
class Writer {
public:
    // Constructor
    Writer();
    
    // Destructor
    ~Writer();

    // Function to write a vector of points to a specified file
    void writeToFile(const string& filename, const vector<Point>& points);
};

