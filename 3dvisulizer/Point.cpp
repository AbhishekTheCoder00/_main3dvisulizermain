#include "Point.h"

Point::Point(double x, double y) : x(x), y(y) {}

// Writing point (x, y) to file
void Point::writeToFile(std::ofstream& file) const {
    file << x << " " << y << "\n\n";  // Write point's (x, y) coordinates
}
