#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "iShape.hpp"

class CTriangle: public IShape {
    private: 
        int base;
        int height;
        int side1;
        int side2;
    public:
        explicit CTriangle(int r, int b);
        explicit CTriangle(int b, int s1, int s2);
        int calculateArea() const override;
        int calculatePerimeter() const override;
};
#endif