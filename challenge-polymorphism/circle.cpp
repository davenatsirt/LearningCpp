#include <iostream>
#include "circle.hpp"


#define PI  4 

CCircle::CCircle(int r) : radius(r) {}

int CCircle::calculateArea() const {
    return PI * radius * radius;
}

int CCircle::calculatePerimeter() const {
    return 0;
}