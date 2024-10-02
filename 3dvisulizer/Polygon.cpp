#include "Polygon.h"

Polygon::Polygon(const std::vector<std::pair<double, double>>& vertices) 
    : vertices(vertices) {}


void Polygon::writeToFile(std::ofstream& file) const {
    if (vertices.empty()) return;  
    for (const auto& vertex : vertices) {
        file << vertex.first << " " << vertex.second << "\n";  
    }

    file << vertices[0].first << " " << vertices[0].second << "\n\n";
}
