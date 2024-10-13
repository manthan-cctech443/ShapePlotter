#include "Manager.h"
#include <iostream>

using namespace std;

// Constructor for the Manager class
Manager::Manager() {}

// Destructor for the Manager class
Manager::~Manager() {}

// Function to choose a shape, input its parameters, and save data to a file
void Manager::chooseShape() {
    int choice;  // Variable to store the user's choice
    cout << "Choose a shape to create and save: " << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Circle" << endl;
    cout << "4. Triangle" << endl;
    cout << "5. Polygon" << endl;
    cout << "6. Line" << endl;
    cout << "7. Regular Polygon" << endl;
    cout << "8. Star" << endl;
    cin >> choice;  // User input for shape selection

    Writer writer;  // Create a Writer object to handle file operations

    // Switch statement to handle different shape choices
    switch (choice) {
        case 1: {
            Rectangle rectangle;  // Create a Rectangle object
            rectangle.input();  // Input parameters for the rectangle
            rectangle.display();  // Display the rectangle
            writer.writeToFile("rectangle.dat", rectangle.calculatePoints());  // Write data to file
            cout << "Rectangle data has been written to rectangle.dat." << endl;
            break;
        }
        case 2: {
            Square square;  // Create a Square object
            square.input();  // Input parameters for the square
            square.display();  // Display the square
            writer.writeToFile("square.dat", square.calculatePoints());  // Write data to file
            cout << "Square data has been written to square.dat." << endl;
            break;
        }
        case 3: {
            Circle circle;  // Create a Circle object
            circle.input();  // Input parameters for the circle
            circle.display();  // Display the circle
            writer.writeToFile("circle.dat", circle.calculatePoints());  // Write data to file
            cout << "Circle data has been written to circle.dat." << endl;
            break;
        }
        case 4: {
            Triangle triangle;  // Create a Triangle object
            triangle.input();  // Input parameters for the triangle
            triangle.display();  // Display the triangle
            writer.writeToFile("triangle.dat", triangle.calculatePoints());  // Write data to file
            cout << "Triangle data has been written to triangle.dat." << endl;
            break;
        }
        case 5: {
            Polygon polygon;  // Create a Polygon object
            polygon.input();  // Input parameters for the polygon
            polygon.display();  // Display the polygon
            writer.writeToFile("polygon.dat", polygon.calculatePoints());  // Write data to file
            cout << "Polygon data has been written to polygon.dat." << endl;
            break;
        }
        case 6: {
            Line line;  // Create a Line object
            line.input();  // Input parameters for the line
            line.display();  // Display the line
            writer.writeToFile("line.dat", line.calculatePoints());  // Write data to file
            cout << "Line data has been written to line.dat." << endl;
            break;
        }
        case 7: {
            RegularPolygon regularPolygon;  // Create a RegularPolygon object
            regularPolygon.input();  // Input parameters for the regular polygon
            regularPolygon.display();  // Display the regular polygon
            writer.writeToFile("regularPolygon.dat", regularPolygon.calculatePoints());  // Write data to file
            cout << "RegularPolygon data has been written to regularPolygon.dat." << endl;
            break;
        }
        case 8: {
            Star star;  // Create a Star object
            star.input();  // Input parameters for the star
            star.display();  // Display the star
            writer.writeToFile("star.dat", star.calculatePoints());  // Write data to file
            cout << "Star data has been written to star.dat." << endl;
            break;
        }
        default: {
            cout << "Invalid choice!" << endl;  // Handle invalid input
            break;
        }
    }
}
