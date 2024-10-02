#include "Line.h"

Line::Line(double x1, double y1, double x2, double y2) 
    : x1(x1), y1(y1), x2(x2), y2(y2) {}

void Line::writeToFile(std::ofstream& file) const {
    file << x1 << " " << y1 << "\n"  // Starting point
         << x2 << " " << y2 << "\n"; // Ending point
}
