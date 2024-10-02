#include "Line.h"

Line::Line(const Point& start, const Point& end) : start(start), end(end) {}

// Writing line coordinates to file
void Line::writeToFile(std::ofstream& file) const {
    start.writeToFile(file);  // Write start point
    end.writeToFile(file);    // Write end point
    file << "\n";  // Separate lines in the file
}
