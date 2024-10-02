#pragma once
#include <vector>
#include <fstream>

class Polygon {
public:
    Polygon(const std::vector<std::pair<double, double>>& vertices);  // Constructor with vertices
    void writeToFile(std::ofstream& file) const;  // Write vertices to file
private:
    std::vector<std::pair<double, double>> vertices;  // Store (x, y) pairs
};
