#include <iostream>
#include "Manager.h"
#include "rectangle.h"
#include "triangle.h"
#include "square.h"
#include "circle.h"
#include "Point.h"
#include "Line.h"
#include "Polygon.h"

void Manager::handleUserInput() {
    int choice;
    double x, y, width, height, side, radius;

    std::cout << "Choose a shape to create:\n";
    std::cout << "1. Point\n";
    std::cout << "2. Line\n";
    std::cout << "3. Triangle\n";
    std::cout << "4. Rectangle\n";
    std::cout << "5. Square\n";
    std::cout << "6. Circle\n";
    std::cout << "7. Polygon\n";
    std::cout << "Enter your choice (1-7): ";
    std::cin >> choice;

    FileWriter writer("output.dat");

    switch (choice) {
        case 1: {  // Point
            std::cout << "Enter point's x, y: ";
            std::cin >> x >> y;
            Point pt(x, y);
            pt.writeToFile(writer.getStream());
            break;
        }

        case 2: {  // Line
           double x1, y1, x2, y2;
           std::cout << "Enter line's start point (x1, y1) and end point (x2, y2): ";
           std::cin >> x1 >> y1 >> x2 >> y2;
           Line ln(x1, y1, x2, y2);
           ln.writeToFile(writer.getStream());
           break;
        }

        case 3: {  // Triangle
            double x1, y1, x2, y2, x3, y3;
            std::cout << "Enter triangle's three points (x1, y1, x2, y2, x3, y3): ";
            std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            Triangle tri(x1, y1, x2, y2, x3, y3);
            tri.writeToFile(writer.getStream());
            break;
        }

        case 4: {  // Rectangle
            std::cout << "Enter rectangle's x, y, width, height: ";
            std::cin >> x >> y >> width >> height;
            Rectangle rect(x, y, width, height);
            rect.writeToFile(writer.getStream());
            break;
        }

        case 5: {  // Square
            std::cout << "Enter square's x, y, side length: ";
            std::cin >> x >> y >> side;
            Square sq(x, y, side);
            sq.writeToFile(writer.getStream());
            break;
        }

        case 6: {  // Circle
            std::cout << "Enter circle's x, y, radius: ";
            std::cin >> x >> y >> radius;
            Circle circ(x, y, radius);
            circ.writeToFile(writer.getStream());
            break;
        }

        case 7: {  // Polygon
            int n;
            std::cout << "Enter the number of vertices: ";
            std::cin >> n;
            std::vector<std::pair<double, double>> vertices;
            for (int i = 0; i < n; ++i) {
                double vx, vy;
                std::cout << "Enter x, y for vertex " << (i + 1) << ": ";
                std::cin >> vx >> vy;
                vertices.emplace_back(vx, vy);
            }
            Polygon poly(vertices);
            poly.writeToFile(writer.getStream());
            break;
        }

        default:
            std::cout << "Invalid choice! Please choose between 1 and 7.\n";
            break;
    }

    std::cout << "Data written to output.dat. Use the following command to plot:\n";
    std::cout << "plot 'output.dat' with lines\n";
}
