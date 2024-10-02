#pragma once
#include <fstream>

class Point {
public:
    Point(double x = 0.0, double y = 0.0);  // Constructor for point coordinates
    void writeToFile(std::ofstream& file) const;  // Write point to file
private:
    double x, y;  // Coordinates of the point
};
