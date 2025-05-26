#include "triangle.hpp"

CTriangle::CTriangle(int b, int h) :
side1(0),
side2(0),
base(b),
height(h) {}

CTriangle::CTriangle(int b, int s1, int s2) :
base(b),
side1(s1),
side2(s2),
height(0) {}

int CTriangle::calculateArea() const {
    return (base * height) / 2;
}

int CTriangle::calculatePerimeter() const {
    return base + side1 + side2;
}
