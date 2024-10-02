#pragma once
#include <fstream>
#include "Point.h"

class Line {
public:
    Line(const Point& start, const Point& end);  // Constructor for start and end points
    void writeToFile(std::ofstream& file) const;  // Write line to file
private:
    Point start, end;  // Start and end points of the line
};
