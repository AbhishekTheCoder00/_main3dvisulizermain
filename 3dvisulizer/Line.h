#ifndef LINE_H
#define LINE_H

#include <fstream>

class Line {
public:
    Line(double x1, double y1, double x2, double y2);
    void writeToFile(std::ofstream& file) const;

private:
    double x1;  
    double y1;  
    double x2;  
    double y2;  
};

#endif 
