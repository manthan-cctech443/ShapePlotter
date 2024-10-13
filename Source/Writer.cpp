#include "Writer.h"
#include <fstream>
#include <iostream>

using namespace std;

//Constructor for Writer class
Writer::Writer() {}

//Destructor for Writer class
Writer::~Writer() {}

// Writes the given points to a file with the specified filename
void Writer::writeToFile(const string& filename, const vector<Point>& points) {
    // Create and open the output file
    ofstream file("C:\\Users\\HP\\Desktop\\ShapePlotter\\ShapePlotter\\DAT\\" + filename);

    // Check if the file is successfully opened
    if (!file.is_open()) {
        cerr << "Error: Could not open the file " << filename << " for writing." << endl;
        return; // Exit the function if the file cannot be opened
    }

    // Write each point to the file
    for (const auto& point : points) {
        file << point.x << " " << point.y << endl; // Write point coordinates
    }

    // Close the file
    file.close();
    cout << "Data successfully written to " << filename << endl; // Confirm data write
}
